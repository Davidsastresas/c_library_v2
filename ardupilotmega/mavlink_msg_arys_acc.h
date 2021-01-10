#pragma once
// MESSAGE ARYS_ACC PACKING

#define MAVLINK_MSG_ID_ARYS_ACC 11050


typedef struct __mavlink_arys_acc_t {
 float grndacc; /*< [m/s/s] groundspeed acceleration.*/
 float arspdacc; /*< [m/s/s] airspeed acceleration.*/
} mavlink_arys_acc_t;

#define MAVLINK_MSG_ID_ARYS_ACC_LEN 8
#define MAVLINK_MSG_ID_ARYS_ACC_MIN_LEN 8
#define MAVLINK_MSG_ID_11050_LEN 8
#define MAVLINK_MSG_ID_11050_MIN_LEN 8

#define MAVLINK_MSG_ID_ARYS_ACC_CRC 127
#define MAVLINK_MSG_ID_11050_CRC 127



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ARYS_ACC { \
    11050, \
    "ARYS_ACC", \
    2, \
    {  { "grndacc", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_arys_acc_t, grndacc) }, \
         { "arspdacc", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_arys_acc_t, arspdacc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ARYS_ACC { \
    "ARYS_ACC", \
    2, \
    {  { "grndacc", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_arys_acc_t, grndacc) }, \
         { "arspdacc", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_arys_acc_t, arspdacc) }, \
         } \
}
#endif

/**
 * @brief Pack a arys_acc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param grndacc [m/s/s] groundspeed acceleration.
 * @param arspdacc [m/s/s] airspeed acceleration.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_arys_acc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float grndacc, float arspdacc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARYS_ACC_LEN];
    _mav_put_float(buf, 0, grndacc);
    _mav_put_float(buf, 4, arspdacc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARYS_ACC_LEN);
#else
    mavlink_arys_acc_t packet;
    packet.grndacc = grndacc;
    packet.arspdacc = arspdacc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARYS_ACC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARYS_ACC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARYS_ACC_MIN_LEN, MAVLINK_MSG_ID_ARYS_ACC_LEN, MAVLINK_MSG_ID_ARYS_ACC_CRC);
}

/**
 * @brief Pack a arys_acc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param grndacc [m/s/s] groundspeed acceleration.
 * @param arspdacc [m/s/s] airspeed acceleration.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_arys_acc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float grndacc,float arspdacc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARYS_ACC_LEN];
    _mav_put_float(buf, 0, grndacc);
    _mav_put_float(buf, 4, arspdacc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARYS_ACC_LEN);
#else
    mavlink_arys_acc_t packet;
    packet.grndacc = grndacc;
    packet.arspdacc = arspdacc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARYS_ACC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARYS_ACC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARYS_ACC_MIN_LEN, MAVLINK_MSG_ID_ARYS_ACC_LEN, MAVLINK_MSG_ID_ARYS_ACC_CRC);
}

/**
 * @brief Encode a arys_acc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param arys_acc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_arys_acc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_arys_acc_t* arys_acc)
{
    return mavlink_msg_arys_acc_pack(system_id, component_id, msg, arys_acc->grndacc, arys_acc->arspdacc);
}

/**
 * @brief Encode a arys_acc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param arys_acc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_arys_acc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_arys_acc_t* arys_acc)
{
    return mavlink_msg_arys_acc_pack_chan(system_id, component_id, chan, msg, arys_acc->grndacc, arys_acc->arspdacc);
}

/**
 * @brief Send a arys_acc message
 * @param chan MAVLink channel to send the message
 *
 * @param grndacc [m/s/s] groundspeed acceleration.
 * @param arspdacc [m/s/s] airspeed acceleration.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_arys_acc_send(mavlink_channel_t chan, float grndacc, float arspdacc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARYS_ACC_LEN];
    _mav_put_float(buf, 0, grndacc);
    _mav_put_float(buf, 4, arspdacc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARYS_ACC, buf, MAVLINK_MSG_ID_ARYS_ACC_MIN_LEN, MAVLINK_MSG_ID_ARYS_ACC_LEN, MAVLINK_MSG_ID_ARYS_ACC_CRC);
#else
    mavlink_arys_acc_t packet;
    packet.grndacc = grndacc;
    packet.arspdacc = arspdacc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARYS_ACC, (const char *)&packet, MAVLINK_MSG_ID_ARYS_ACC_MIN_LEN, MAVLINK_MSG_ID_ARYS_ACC_LEN, MAVLINK_MSG_ID_ARYS_ACC_CRC);
#endif
}

/**
 * @brief Send a arys_acc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_arys_acc_send_struct(mavlink_channel_t chan, const mavlink_arys_acc_t* arys_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_arys_acc_send(chan, arys_acc->grndacc, arys_acc->arspdacc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARYS_ACC, (const char *)arys_acc, MAVLINK_MSG_ID_ARYS_ACC_MIN_LEN, MAVLINK_MSG_ID_ARYS_ACC_LEN, MAVLINK_MSG_ID_ARYS_ACC_CRC);
#endif
}

#if MAVLINK_MSG_ID_ARYS_ACC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_arys_acc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float grndacc, float arspdacc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, grndacc);
    _mav_put_float(buf, 4, arspdacc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARYS_ACC, buf, MAVLINK_MSG_ID_ARYS_ACC_MIN_LEN, MAVLINK_MSG_ID_ARYS_ACC_LEN, MAVLINK_MSG_ID_ARYS_ACC_CRC);
#else
    mavlink_arys_acc_t *packet = (mavlink_arys_acc_t *)msgbuf;
    packet->grndacc = grndacc;
    packet->arspdacc = arspdacc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARYS_ACC, (const char *)packet, MAVLINK_MSG_ID_ARYS_ACC_MIN_LEN, MAVLINK_MSG_ID_ARYS_ACC_LEN, MAVLINK_MSG_ID_ARYS_ACC_CRC);
#endif
}
#endif

#endif

// MESSAGE ARYS_ACC UNPACKING


/**
 * @brief Get field grndacc from arys_acc message
 *
 * @return [m/s/s] groundspeed acceleration.
 */
static inline float mavlink_msg_arys_acc_get_grndacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field arspdacc from arys_acc message
 *
 * @return [m/s/s] airspeed acceleration.
 */
static inline float mavlink_msg_arys_acc_get_arspdacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a arys_acc message into a struct
 *
 * @param msg The message to decode
 * @param arys_acc C-struct to decode the message contents into
 */
static inline void mavlink_msg_arys_acc_decode(const mavlink_message_t* msg, mavlink_arys_acc_t* arys_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    arys_acc->grndacc = mavlink_msg_arys_acc_get_grndacc(msg);
    arys_acc->arspdacc = mavlink_msg_arys_acc_get_arspdacc(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ARYS_ACC_LEN? msg->len : MAVLINK_MSG_ID_ARYS_ACC_LEN;
        memset(arys_acc, 0, MAVLINK_MSG_ID_ARYS_ACC_LEN);
    memcpy(arys_acc, _MAV_PAYLOAD(msg), len);
#endif
}
