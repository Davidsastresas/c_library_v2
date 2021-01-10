#pragma once
// MESSAGE AR_ADC PACKING

#define MAVLINK_MSG_ID_AR_ADC 11101


typedef struct __mavlink_ar_adc_t {
 float adc0; /*< [mV] mv measured.*/
 float adc1; /*< [mV] mv measured.*/
 float adc2; /*< [mV] mv measured.*/
 float adc3; /*< [mV] mv measured.*/
 uint8_t status; /*<  status of adc, 1 ok 0 not ok.*/
} mavlink_ar_adc_t;

#define MAVLINK_MSG_ID_AR_ADC_LEN 17
#define MAVLINK_MSG_ID_AR_ADC_MIN_LEN 17
#define MAVLINK_MSG_ID_11101_LEN 17
#define MAVLINK_MSG_ID_11101_MIN_LEN 17

#define MAVLINK_MSG_ID_AR_ADC_CRC 30
#define MAVLINK_MSG_ID_11101_CRC 30



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AR_ADC { \
    11101, \
    "AR_ADC", \
    5, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_ar_adc_t, status) }, \
         { "adc0", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ar_adc_t, adc0) }, \
         { "adc1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ar_adc_t, adc1) }, \
         { "adc2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ar_adc_t, adc2) }, \
         { "adc3", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ar_adc_t, adc3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AR_ADC { \
    "AR_ADC", \
    5, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_ar_adc_t, status) }, \
         { "adc0", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ar_adc_t, adc0) }, \
         { "adc1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ar_adc_t, adc1) }, \
         { "adc2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ar_adc_t, adc2) }, \
         { "adc3", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ar_adc_t, adc3) }, \
         } \
}
#endif

/**
 * @brief Pack a ar_adc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  status of adc, 1 ok 0 not ok.
 * @param adc0 [mV] mv measured.
 * @param adc1 [mV] mv measured.
 * @param adc2 [mV] mv measured.
 * @param adc3 [mV] mv measured.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ar_adc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t status, float adc0, float adc1, float adc2, float adc3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AR_ADC_LEN];
    _mav_put_float(buf, 0, adc0);
    _mav_put_float(buf, 4, adc1);
    _mav_put_float(buf, 8, adc2);
    _mav_put_float(buf, 12, adc3);
    _mav_put_uint8_t(buf, 16, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AR_ADC_LEN);
#else
    mavlink_ar_adc_t packet;
    packet.adc0 = adc0;
    packet.adc1 = adc1;
    packet.adc2 = adc2;
    packet.adc3 = adc3;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AR_ADC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AR_ADC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AR_ADC_MIN_LEN, MAVLINK_MSG_ID_AR_ADC_LEN, MAVLINK_MSG_ID_AR_ADC_CRC);
}

/**
 * @brief Pack a ar_adc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status  status of adc, 1 ok 0 not ok.
 * @param adc0 [mV] mv measured.
 * @param adc1 [mV] mv measured.
 * @param adc2 [mV] mv measured.
 * @param adc3 [mV] mv measured.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ar_adc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t status,float adc0,float adc1,float adc2,float adc3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AR_ADC_LEN];
    _mav_put_float(buf, 0, adc0);
    _mav_put_float(buf, 4, adc1);
    _mav_put_float(buf, 8, adc2);
    _mav_put_float(buf, 12, adc3);
    _mav_put_uint8_t(buf, 16, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AR_ADC_LEN);
#else
    mavlink_ar_adc_t packet;
    packet.adc0 = adc0;
    packet.adc1 = adc1;
    packet.adc2 = adc2;
    packet.adc3 = adc3;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AR_ADC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AR_ADC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AR_ADC_MIN_LEN, MAVLINK_MSG_ID_AR_ADC_LEN, MAVLINK_MSG_ID_AR_ADC_CRC);
}

/**
 * @brief Encode a ar_adc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ar_adc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ar_adc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ar_adc_t* ar_adc)
{
    return mavlink_msg_ar_adc_pack(system_id, component_id, msg, ar_adc->status, ar_adc->adc0, ar_adc->adc1, ar_adc->adc2, ar_adc->adc3);
}

/**
 * @brief Encode a ar_adc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ar_adc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ar_adc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ar_adc_t* ar_adc)
{
    return mavlink_msg_ar_adc_pack_chan(system_id, component_id, chan, msg, ar_adc->status, ar_adc->adc0, ar_adc->adc1, ar_adc->adc2, ar_adc->adc3);
}

/**
 * @brief Send a ar_adc message
 * @param chan MAVLink channel to send the message
 *
 * @param status  status of adc, 1 ok 0 not ok.
 * @param adc0 [mV] mv measured.
 * @param adc1 [mV] mv measured.
 * @param adc2 [mV] mv measured.
 * @param adc3 [mV] mv measured.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ar_adc_send(mavlink_channel_t chan, uint8_t status, float adc0, float adc1, float adc2, float adc3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AR_ADC_LEN];
    _mav_put_float(buf, 0, adc0);
    _mav_put_float(buf, 4, adc1);
    _mav_put_float(buf, 8, adc2);
    _mav_put_float(buf, 12, adc3);
    _mav_put_uint8_t(buf, 16, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_ADC, buf, MAVLINK_MSG_ID_AR_ADC_MIN_LEN, MAVLINK_MSG_ID_AR_ADC_LEN, MAVLINK_MSG_ID_AR_ADC_CRC);
#else
    mavlink_ar_adc_t packet;
    packet.adc0 = adc0;
    packet.adc1 = adc1;
    packet.adc2 = adc2;
    packet.adc3 = adc3;
    packet.status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_ADC, (const char *)&packet, MAVLINK_MSG_ID_AR_ADC_MIN_LEN, MAVLINK_MSG_ID_AR_ADC_LEN, MAVLINK_MSG_ID_AR_ADC_CRC);
#endif
}

/**
 * @brief Send a ar_adc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ar_adc_send_struct(mavlink_channel_t chan, const mavlink_ar_adc_t* ar_adc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ar_adc_send(chan, ar_adc->status, ar_adc->adc0, ar_adc->adc1, ar_adc->adc2, ar_adc->adc3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_ADC, (const char *)ar_adc, MAVLINK_MSG_ID_AR_ADC_MIN_LEN, MAVLINK_MSG_ID_AR_ADC_LEN, MAVLINK_MSG_ID_AR_ADC_CRC);
#endif
}

#if MAVLINK_MSG_ID_AR_ADC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ar_adc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t status, float adc0, float adc1, float adc2, float adc3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, adc0);
    _mav_put_float(buf, 4, adc1);
    _mav_put_float(buf, 8, adc2);
    _mav_put_float(buf, 12, adc3);
    _mav_put_uint8_t(buf, 16, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_ADC, buf, MAVLINK_MSG_ID_AR_ADC_MIN_LEN, MAVLINK_MSG_ID_AR_ADC_LEN, MAVLINK_MSG_ID_AR_ADC_CRC);
#else
    mavlink_ar_adc_t *packet = (mavlink_ar_adc_t *)msgbuf;
    packet->adc0 = adc0;
    packet->adc1 = adc1;
    packet->adc2 = adc2;
    packet->adc3 = adc3;
    packet->status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_ADC, (const char *)packet, MAVLINK_MSG_ID_AR_ADC_MIN_LEN, MAVLINK_MSG_ID_AR_ADC_LEN, MAVLINK_MSG_ID_AR_ADC_CRC);
#endif
}
#endif

#endif

// MESSAGE AR_ADC UNPACKING


/**
 * @brief Get field status from ar_adc message
 *
 * @return  status of adc, 1 ok 0 not ok.
 */
static inline uint8_t mavlink_msg_ar_adc_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field adc0 from ar_adc message
 *
 * @return [mV] mv measured.
 */
static inline float mavlink_msg_ar_adc_get_adc0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field adc1 from ar_adc message
 *
 * @return [mV] mv measured.
 */
static inline float mavlink_msg_ar_adc_get_adc1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field adc2 from ar_adc message
 *
 * @return [mV] mv measured.
 */
static inline float mavlink_msg_ar_adc_get_adc2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field adc3 from ar_adc message
 *
 * @return [mV] mv measured.
 */
static inline float mavlink_msg_ar_adc_get_adc3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a ar_adc message into a struct
 *
 * @param msg The message to decode
 * @param ar_adc C-struct to decode the message contents into
 */
static inline void mavlink_msg_ar_adc_decode(const mavlink_message_t* msg, mavlink_ar_adc_t* ar_adc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ar_adc->adc0 = mavlink_msg_ar_adc_get_adc0(msg);
    ar_adc->adc1 = mavlink_msg_ar_adc_get_adc1(msg);
    ar_adc->adc2 = mavlink_msg_ar_adc_get_adc2(msg);
    ar_adc->adc3 = mavlink_msg_ar_adc_get_adc3(msg);
    ar_adc->status = mavlink_msg_ar_adc_get_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AR_ADC_LEN? msg->len : MAVLINK_MSG_ID_AR_ADC_LEN;
        memset(ar_adc, 0, MAVLINK_MSG_ID_AR_ADC_LEN);
    memcpy(ar_adc, _MAV_PAYLOAD(msg), len);
#endif
}
