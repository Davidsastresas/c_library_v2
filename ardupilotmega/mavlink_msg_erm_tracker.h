#pragma once
// MESSAGE ERM_TRACKER PACKING

#define MAVLINK_MSG_ID_ERM_TRACKER 11050

MAVPACKED(
typedef struct __mavlink_erm_tracker_t {
 uint16_t x0; /*< [coordinate] x0.*/
 uint16_t x1; /*< [coordinate] x1.*/
 uint16_t y0; /*< [coordinate] y0.*/
 uint16_t y1; /*< [coordinate] y1.*/
 uint8_t Status; /*< [NA] Status.*/
}) mavlink_erm_tracker_t;

#define MAVLINK_MSG_ID_ERM_TRACKER_LEN 9
#define MAVLINK_MSG_ID_ERM_TRACKER_MIN_LEN 9
#define MAVLINK_MSG_ID_11050_LEN 9
#define MAVLINK_MSG_ID_11050_MIN_LEN 9

#define MAVLINK_MSG_ID_ERM_TRACKER_CRC 129
#define MAVLINK_MSG_ID_11050_CRC 129



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ERM_TRACKER { \
    11050, \
    "ERM_TRACKER", \
    5, \
    {  { "Status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_erm_tracker_t, Status) }, \
         { "x0", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_erm_tracker_t, x0) }, \
         { "x1", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_erm_tracker_t, x1) }, \
         { "y0", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_erm_tracker_t, y0) }, \
         { "y1", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_erm_tracker_t, y1) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ERM_TRACKER { \
    "ERM_TRACKER", \
    5, \
    {  { "Status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_erm_tracker_t, Status) }, \
         { "x0", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_erm_tracker_t, x0) }, \
         { "x1", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_erm_tracker_t, x1) }, \
         { "y0", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_erm_tracker_t, y0) }, \
         { "y1", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_erm_tracker_t, y1) }, \
         } \
}
#endif

/**
 * @brief Pack a erm_tracker message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Status [NA] Status.
 * @param x0 [coordinate] x0.
 * @param x1 [coordinate] x1.
 * @param y0 [coordinate] y0.
 * @param y1 [coordinate] y1.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_erm_tracker_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t Status, uint16_t x0, uint16_t x1, uint16_t y0, uint16_t y1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ERM_TRACKER_LEN];
    _mav_put_uint16_t(buf, 0, x0);
    _mav_put_uint16_t(buf, 2, x1);
    _mav_put_uint16_t(buf, 4, y0);
    _mav_put_uint16_t(buf, 6, y1);
    _mav_put_uint8_t(buf, 8, Status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ERM_TRACKER_LEN);
#else
    mavlink_erm_tracker_t packet;
    packet.x0 = x0;
    packet.x1 = x1;
    packet.y0 = y0;
    packet.y1 = y1;
    packet.Status = Status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ERM_TRACKER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ERM_TRACKER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ERM_TRACKER_MIN_LEN, MAVLINK_MSG_ID_ERM_TRACKER_LEN, MAVLINK_MSG_ID_ERM_TRACKER_CRC);
}

/**
 * @brief Pack a erm_tracker message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Status [NA] Status.
 * @param x0 [coordinate] x0.
 * @param x1 [coordinate] x1.
 * @param y0 [coordinate] y0.
 * @param y1 [coordinate] y1.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_erm_tracker_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t Status,uint16_t x0,uint16_t x1,uint16_t y0,uint16_t y1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ERM_TRACKER_LEN];
    _mav_put_uint16_t(buf, 0, x0);
    _mav_put_uint16_t(buf, 2, x1);
    _mav_put_uint16_t(buf, 4, y0);
    _mav_put_uint16_t(buf, 6, y1);
    _mav_put_uint8_t(buf, 8, Status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ERM_TRACKER_LEN);
#else
    mavlink_erm_tracker_t packet;
    packet.x0 = x0;
    packet.x1 = x1;
    packet.y0 = y0;
    packet.y1 = y1;
    packet.Status = Status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ERM_TRACKER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ERM_TRACKER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ERM_TRACKER_MIN_LEN, MAVLINK_MSG_ID_ERM_TRACKER_LEN, MAVLINK_MSG_ID_ERM_TRACKER_CRC);
}

/**
 * @brief Encode a erm_tracker struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param erm_tracker C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_erm_tracker_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_erm_tracker_t* erm_tracker)
{
    return mavlink_msg_erm_tracker_pack(system_id, component_id, msg, erm_tracker->Status, erm_tracker->x0, erm_tracker->x1, erm_tracker->y0, erm_tracker->y1);
}

/**
 * @brief Encode a erm_tracker struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param erm_tracker C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_erm_tracker_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_erm_tracker_t* erm_tracker)
{
    return mavlink_msg_erm_tracker_pack_chan(system_id, component_id, chan, msg, erm_tracker->Status, erm_tracker->x0, erm_tracker->x1, erm_tracker->y0, erm_tracker->y1);
}

/**
 * @brief Send a erm_tracker message
 * @param chan MAVLink channel to send the message
 *
 * @param Status [NA] Status.
 * @param x0 [coordinate] x0.
 * @param x1 [coordinate] x1.
 * @param y0 [coordinate] y0.
 * @param y1 [coordinate] y1.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_erm_tracker_send(mavlink_channel_t chan, uint8_t Status, uint16_t x0, uint16_t x1, uint16_t y0, uint16_t y1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ERM_TRACKER_LEN];
    _mav_put_uint16_t(buf, 0, x0);
    _mav_put_uint16_t(buf, 2, x1);
    _mav_put_uint16_t(buf, 4, y0);
    _mav_put_uint16_t(buf, 6, y1);
    _mav_put_uint8_t(buf, 8, Status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ERM_TRACKER, buf, MAVLINK_MSG_ID_ERM_TRACKER_MIN_LEN, MAVLINK_MSG_ID_ERM_TRACKER_LEN, MAVLINK_MSG_ID_ERM_TRACKER_CRC);
#else
    mavlink_erm_tracker_t packet;
    packet.x0 = x0;
    packet.x1 = x1;
    packet.y0 = y0;
    packet.y1 = y1;
    packet.Status = Status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ERM_TRACKER, (const char *)&packet, MAVLINK_MSG_ID_ERM_TRACKER_MIN_LEN, MAVLINK_MSG_ID_ERM_TRACKER_LEN, MAVLINK_MSG_ID_ERM_TRACKER_CRC);
#endif
}

/**
 * @brief Send a erm_tracker message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_erm_tracker_send_struct(mavlink_channel_t chan, const mavlink_erm_tracker_t* erm_tracker)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_erm_tracker_send(chan, erm_tracker->Status, erm_tracker->x0, erm_tracker->x1, erm_tracker->y0, erm_tracker->y1);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ERM_TRACKER, (const char *)erm_tracker, MAVLINK_MSG_ID_ERM_TRACKER_MIN_LEN, MAVLINK_MSG_ID_ERM_TRACKER_LEN, MAVLINK_MSG_ID_ERM_TRACKER_CRC);
#endif
}

#if MAVLINK_MSG_ID_ERM_TRACKER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_erm_tracker_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Status, uint16_t x0, uint16_t x1, uint16_t y0, uint16_t y1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, x0);
    _mav_put_uint16_t(buf, 2, x1);
    _mav_put_uint16_t(buf, 4, y0);
    _mav_put_uint16_t(buf, 6, y1);
    _mav_put_uint8_t(buf, 8, Status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ERM_TRACKER, buf, MAVLINK_MSG_ID_ERM_TRACKER_MIN_LEN, MAVLINK_MSG_ID_ERM_TRACKER_LEN, MAVLINK_MSG_ID_ERM_TRACKER_CRC);
#else
    mavlink_erm_tracker_t *packet = (mavlink_erm_tracker_t *)msgbuf;
    packet->x0 = x0;
    packet->x1 = x1;
    packet->y0 = y0;
    packet->y1 = y1;
    packet->Status = Status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ERM_TRACKER, (const char *)packet, MAVLINK_MSG_ID_ERM_TRACKER_MIN_LEN, MAVLINK_MSG_ID_ERM_TRACKER_LEN, MAVLINK_MSG_ID_ERM_TRACKER_CRC);
#endif
}
#endif

#endif

// MESSAGE ERM_TRACKER UNPACKING


/**
 * @brief Get field Status from erm_tracker message
 *
 * @return [NA] Status.
 */
static inline uint8_t mavlink_msg_erm_tracker_get_Status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field x0 from erm_tracker message
 *
 * @return [coordinate] x0.
 */
static inline uint16_t mavlink_msg_erm_tracker_get_x0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field x1 from erm_tracker message
 *
 * @return [coordinate] x1.
 */
static inline uint16_t mavlink_msg_erm_tracker_get_x1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field y0 from erm_tracker message
 *
 * @return [coordinate] y0.
 */
static inline uint16_t mavlink_msg_erm_tracker_get_y0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field y1 from erm_tracker message
 *
 * @return [coordinate] y1.
 */
static inline uint16_t mavlink_msg_erm_tracker_get_y1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Decode a erm_tracker message into a struct
 *
 * @param msg The message to decode
 * @param erm_tracker C-struct to decode the message contents into
 */
static inline void mavlink_msg_erm_tracker_decode(const mavlink_message_t* msg, mavlink_erm_tracker_t* erm_tracker)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    erm_tracker->x0 = mavlink_msg_erm_tracker_get_x0(msg);
    erm_tracker->x1 = mavlink_msg_erm_tracker_get_x1(msg);
    erm_tracker->y0 = mavlink_msg_erm_tracker_get_y0(msg);
    erm_tracker->y1 = mavlink_msg_erm_tracker_get_y1(msg);
    erm_tracker->Status = mavlink_msg_erm_tracker_get_Status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ERM_TRACKER_LEN? msg->len : MAVLINK_MSG_ID_ERM_TRACKER_LEN;
        memset(erm_tracker, 0, MAVLINK_MSG_ID_ERM_TRACKER_LEN);
    memcpy(erm_tracker, _MAV_PAYLOAD(msg), len);
#endif
}
