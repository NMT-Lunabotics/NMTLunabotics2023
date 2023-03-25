/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018-2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 38.0.2 Fri Mar 24 20:25:35 2023.
 */

#ifndef DAVID_H
#define DAVID_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifndef EINVAL
#    define EINVAL 22
#endif

/* Frame ids. */
#define DAVID_E_STOP_FRAME_ID (0x00u)
#define DAVID_E_START_FRAME_ID (0x01u)
#define DAVID_PITCH_CTRL_HOME_FRAME_ID (0x10u)
#define DAVID_SET_TRIG_DELAY_FRAME_ID (0x20u)
#define DAVID_PITCH_CTRL_LEFT_FRAME_ID (0x101u)
#define DAVID_PITCH_CTRL_RIGHT_FRAME_ID (0x110u)
#define DAVID_PITCH_CTRL_BOTH_FRAME_ID (0x111u)
#define DAVID_PITCH_TELEM_LEFT_FRAME_ID (0x200u)
#define DAVID_PITCH_TELEM_RIGHT_FRAME_ID (0x201u)

/* Frame lengths in bytes. */
#define DAVID_E_STOP_LENGTH (0u)
#define DAVID_E_START_LENGTH (0u)
#define DAVID_PITCH_CTRL_HOME_LENGTH (0u)
#define DAVID_SET_TRIG_DELAY_LENGTH (8u)
#define DAVID_PITCH_CTRL_LEFT_LENGTH (8u)
#define DAVID_PITCH_CTRL_RIGHT_LENGTH (8u)
#define DAVID_PITCH_CTRL_BOTH_LENGTH (8u)
#define DAVID_PITCH_TELEM_LEFT_LENGTH (7u)
#define DAVID_PITCH_TELEM_RIGHT_LENGTH (7u)

/* Extended or standard frame types. */
#define DAVID_E_STOP_IS_EXTENDED (0)
#define DAVID_E_START_IS_EXTENDED (0)
#define DAVID_PITCH_CTRL_HOME_IS_EXTENDED (0)
#define DAVID_SET_TRIG_DELAY_IS_EXTENDED (0)
#define DAVID_PITCH_CTRL_LEFT_IS_EXTENDED (0)
#define DAVID_PITCH_CTRL_RIGHT_IS_EXTENDED (0)
#define DAVID_PITCH_CTRL_BOTH_IS_EXTENDED (0)
#define DAVID_PITCH_TELEM_LEFT_IS_EXTENDED (0)
#define DAVID_PITCH_TELEM_RIGHT_IS_EXTENDED (0)

/* Frame cycle times in milliseconds. */


/* Signal choices. */


/**
 * Signals in message EStop.
 *
 * All signal values are as on the CAN bus.
 */
struct david_e_stop_t {
    /**
     * Dummy signal in empty message.
     */
    uint8_t dummy;
};

/**
 * Signals in message EStart.
 *
 * All signal values are as on the CAN bus.
 */
struct david_e_start_t {
    /**
     * Dummy signal in empty message.
     */
    uint8_t dummy;
};

/**
 * Signals in message PitchCtrlHome.
 *
 * All signal values are as on the CAN bus.
 */
struct david_pitch_ctrl_home_t {
    /**
     * Dummy signal in empty message.
     */
    uint8_t dummy;
};

/**
 * Signals in message SetTrigDelay.
 *
 * All signal values are as on the CAN bus.
 */
struct david_set_trig_delay_t {
    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint64_t microseconds;

    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint16_t max_count;
};

/**
 * Signals in message PitchCtrlLeft.
 *
 * All signal values are as on the CAN bus.
 */
struct david_pitch_ctrl_left_t {
    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint64_t count;

    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint16_t tolerance;
};

/**
 * Signals in message PitchCtrlRight.
 *
 * All signal values are as on the CAN bus.
 */
struct david_pitch_ctrl_right_t {
    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint64_t count;

    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint16_t tolerance;
};

/**
 * Signals in message PitchCtrlBoth.
 *
 * All signal values are as on the CAN bus.
 */
struct david_pitch_ctrl_both_t {
    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint64_t count;

    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint16_t tolerance;
};

/**
 * Signals in message PitchTelemLeft.
 *
 * All signal values are as on the CAN bus.
 */
struct david_pitch_telem_left_t {
    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint64_t count;

    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint8_t done;
};

/**
 * Signals in message PitchTelemRight.
 *
 * All signal values are as on the CAN bus.
 */
struct david_pitch_telem_right_t {
    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint64_t count;

    /**
     * Range: -
     * Scale: 1
     * Offset: 0
     */
    uint8_t done;
};

/**
 * Pack message EStop.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_e_stop_pack(
    uint8_t *dst_p,
    const struct david_e_stop_t *src_p,
    size_t size);

/**
 * Unpack message EStop.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_e_stop_unpack(
    struct david_e_stop_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Pack message EStart.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_e_start_pack(
    uint8_t *dst_p,
    const struct david_e_start_t *src_p,
    size_t size);

/**
 * Unpack message EStart.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_e_start_unpack(
    struct david_e_start_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Pack message PitchCtrlHome.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_pitch_ctrl_home_pack(
    uint8_t *dst_p,
    const struct david_pitch_ctrl_home_t *src_p,
    size_t size);

/**
 * Unpack message PitchCtrlHome.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_pitch_ctrl_home_unpack(
    struct david_pitch_ctrl_home_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Pack message SetTrigDelay.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_set_trig_delay_pack(
    uint8_t *dst_p,
    const struct david_set_trig_delay_t *src_p,
    size_t size);

/**
 * Unpack message SetTrigDelay.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_set_trig_delay_unpack(
    struct david_set_trig_delay_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint64_t david_set_trig_delay_microseconds_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_set_trig_delay_microseconds_decode(uint64_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_set_trig_delay_microseconds_is_in_range(uint64_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint16_t david_set_trig_delay_max_count_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_set_trig_delay_max_count_decode(uint16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_set_trig_delay_max_count_is_in_range(uint16_t value);

/**
 * Pack message PitchCtrlLeft.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_pitch_ctrl_left_pack(
    uint8_t *dst_p,
    const struct david_pitch_ctrl_left_t *src_p,
    size_t size);

/**
 * Unpack message PitchCtrlLeft.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_pitch_ctrl_left_unpack(
    struct david_pitch_ctrl_left_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint64_t david_pitch_ctrl_left_count_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_ctrl_left_count_decode(uint64_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_ctrl_left_count_is_in_range(uint64_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint16_t david_pitch_ctrl_left_tolerance_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_ctrl_left_tolerance_decode(uint16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_ctrl_left_tolerance_is_in_range(uint16_t value);

/**
 * Pack message PitchCtrlRight.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_pitch_ctrl_right_pack(
    uint8_t *dst_p,
    const struct david_pitch_ctrl_right_t *src_p,
    size_t size);

/**
 * Unpack message PitchCtrlRight.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_pitch_ctrl_right_unpack(
    struct david_pitch_ctrl_right_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint64_t david_pitch_ctrl_right_count_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_ctrl_right_count_decode(uint64_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_ctrl_right_count_is_in_range(uint64_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint16_t david_pitch_ctrl_right_tolerance_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_ctrl_right_tolerance_decode(uint16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_ctrl_right_tolerance_is_in_range(uint16_t value);

/**
 * Pack message PitchCtrlBoth.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_pitch_ctrl_both_pack(
    uint8_t *dst_p,
    const struct david_pitch_ctrl_both_t *src_p,
    size_t size);

/**
 * Unpack message PitchCtrlBoth.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_pitch_ctrl_both_unpack(
    struct david_pitch_ctrl_both_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint64_t david_pitch_ctrl_both_count_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_ctrl_both_count_decode(uint64_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_ctrl_both_count_is_in_range(uint64_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint16_t david_pitch_ctrl_both_tolerance_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_ctrl_both_tolerance_decode(uint16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_ctrl_both_tolerance_is_in_range(uint16_t value);

/**
 * Pack message PitchTelemLeft.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_pitch_telem_left_pack(
    uint8_t *dst_p,
    const struct david_pitch_telem_left_t *src_p,
    size_t size);

/**
 * Unpack message PitchTelemLeft.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_pitch_telem_left_unpack(
    struct david_pitch_telem_left_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint64_t david_pitch_telem_left_count_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_telem_left_count_decode(uint64_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_telem_left_count_is_in_range(uint64_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t david_pitch_telem_left_done_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_telem_left_done_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_telem_left_done_is_in_range(uint8_t value);

/**
 * Pack message PitchTelemRight.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int david_pitch_telem_right_pack(
    uint8_t *dst_p,
    const struct david_pitch_telem_right_t *src_p,
    size_t size);

/**
 * Unpack message PitchTelemRight.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int david_pitch_telem_right_unpack(
    struct david_pitch_telem_right_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint64_t david_pitch_telem_right_count_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_telem_right_count_decode(uint64_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_telem_right_count_is_in_range(uint64_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t david_pitch_telem_right_done_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double david_pitch_telem_right_done_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool david_pitch_telem_right_done_is_in_range(uint8_t value);


#ifdef __cplusplus
}
#endif

#endif
