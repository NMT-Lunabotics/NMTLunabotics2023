// Shared library code for Arduinos.

#ifndef ARDUINO_LIB_H
#define ARDUINO_LIB_H

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <mcp_can.h>

// Pin CAN runs on.
#define SPI_CS_PIN 17

// Generate a case label for unpacking a particular frame kind from
// `packet`. `frame_upper` and `frame_lower` should be the name of the
// frame, in SCREAMING_SNAKE_CASE and snake_case respectively.
//
// FRAME_CASE(FOO, foo) {
//     ...
// }
// is equivalent to
// case FOO_FRAME_ID: {
//     foo_t frame;
//     foo_unpack(&frame, packet.buf, packet.len);
//     ...
// }
#define FRAME_CASE(frame_upper, frame_lower)                                   \
    break;                                                                     \
    case frame_upper##_FRAME_ID:                                               \
        for (bool once = true; once; once = false)                             \
            for (frame_lower##_t frame;                                        \
                 frame_lower##_unpack(&frame, packet.buf, packet.len), once;   \
                 once = false)

struct CANPacket {
    uint32_t len;
    uint32_t id;
    unsigned char buf[8];
};

// Set up a CAN connection.
inline MCP_CAN setup_can() {
    MCP_CAN can(SPI_CS_PIN);
    while (can.begin(CAN_500KBPS) != CAN_OK) {
        Serial.println("CAN bus fail!");
        delay(100);
    }
    Serial.println("CAN bus ok!");
    return can;
}

// Read a CAN packet. Blocks until one is available.
inline CANPacket can_read(MCP_CAN &can) {
    while (can.checkReceive() != CAN_MSGAVAIL)
        ;
    CANPacket packet;
    can.readMsgBuf((unsigned char *)&packet.len, packet.buf);
    packet.id = can.getCanId();

    return packet;
}

// Output pins.
class OutPin {
    int num;

  public:
    OutPin(int num) : num(num) { pinMode(num, OUTPUT); }
    void write(bool value) { digitalWrite(num, value ? HIGH : LOW); }
    void write_pwm(double duty_cycle) {
        analogWrite(num, min(duty_cycle, 1) * 255);
    }
};

// Input pins.
class InPin {
    int num;

  public:
    InPin(int num) : num(num) { pinMode(num, INPUT); }
    bool read() { return digitalRead(num) == HIGH; }
    double read_analog() { return analogRead(num) / 1023.0; }
};

// Relay controller.
class Relay {
    OutPin left;
    OutPin right;
    OutPin common;

  public:
    Relay(int left, int right, int common)
        : left(left), right(right), common(common) {}

    // Sets the relay to output on its left pin, and returns a digital
    // output pin that is now connected to the left side of the relay.
    OutPin &output_left() {
        left.write(false);
        right.write(true);
        return common;
    }

    // Sets the relay to output on its right pin, and returns a digital
    // output pin that is now connected to the right side of the relay.
    OutPin &output_right() {
        left.write(true);
        right.write(false);
        return common;
    }
};

#endif // ARDUINO_LIB_H