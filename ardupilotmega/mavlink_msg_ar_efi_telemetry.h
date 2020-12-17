#pragma once
// MESSAGE AR_EFI_TELEMETRY PACKING

#define MAVLINK_MSG_ID_AR_EFI_TELEMETRY 11100

MAVPACKED(
typedef struct __mavlink_ar_efi_telemetry_t {
 float fuel_instant; /*< [NK] fuel instant consumption.*/
 float fuel_consumed; /*< [NK] fuel consumed.*/
 float fuel_remaining; /*< [NK] fuel remaining.*/
 int16_t coolant; /*< [dc degree F] coolant degree, deci Farenheit*/
 uint16_t rpm; /*< [rpm] RPM.*/
 int16_t barometer; /*< [kPa] barometric pressure measured by ecu.*/
 int16_t tps; /*< [%] throttle position.*/
 int16_t batteryVoltage; /*< [V] battery voltage.*/
}) mavlink_ar_efi_telemetry_t;

#define MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN 22
#define MAVLINK_MSG_ID_AR_EFI_TELEMETRY_MIN_LEN 22
#define MAVLINK_MSG_ID_11100_LEN 22
#define MAVLINK_MSG_ID_11100_MIN_LEN 22

#define MAVLINK_MSG_ID_AR_EFI_TELEMETRY_CRC 211
#define MAVLINK_MSG_ID_11100_CRC 211



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AR_EFI_TELEMETRY { \
    11100, \
    "AR_EFI_TELEMETRY", \
    8, \
    {  { "coolant", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ar_efi_telemetry_t, coolant) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_ar_efi_telemetry_t, rpm) }, \
         { "barometer", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ar_efi_telemetry_t, barometer) }, \
         { "tps", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ar_efi_telemetry_t, tps) }, \
         { "batteryVoltage", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ar_efi_telemetry_t, batteryVoltage) }, \
         { "fuel_instant", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ar_efi_telemetry_t, fuel_instant) }, \
         { "fuel_consumed", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ar_efi_telemetry_t, fuel_consumed) }, \
         { "fuel_remaining", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ar_efi_telemetry_t, fuel_remaining) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AR_EFI_TELEMETRY { \
    "AR_EFI_TELEMETRY", \
    8, \
    {  { "coolant", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_ar_efi_telemetry_t, coolant) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_ar_efi_telemetry_t, rpm) }, \
         { "barometer", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_ar_efi_telemetry_t, barometer) }, \
         { "tps", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_ar_efi_telemetry_t, tps) }, \
         { "batteryVoltage", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_ar_efi_telemetry_t, batteryVoltage) }, \
         { "fuel_instant", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ar_efi_telemetry_t, fuel_instant) }, \
         { "fuel_consumed", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ar_efi_telemetry_t, fuel_consumed) }, \
         { "fuel_remaining", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ar_efi_telemetry_t, fuel_remaining) }, \
         } \
}
#endif

/**
 * @brief Pack a ar_efi_telemetry message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param coolant [dc degree F] coolant degree, deci Farenheit
 * @param rpm [rpm] RPM.
 * @param barometer [kPa] barometric pressure measured by ecu.
 * @param tps [%] throttle position.
 * @param batteryVoltage [V] battery voltage.
 * @param fuel_instant [NK] fuel instant consumption.
 * @param fuel_consumed [NK] fuel consumed.
 * @param fuel_remaining [NK] fuel remaining.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ar_efi_telemetry_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t coolant, uint16_t rpm, int16_t barometer, int16_t tps, int16_t batteryVoltage, float fuel_instant, float fuel_consumed, float fuel_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN];
    _mav_put_float(buf, 0, fuel_instant);
    _mav_put_float(buf, 4, fuel_consumed);
    _mav_put_float(buf, 8, fuel_remaining);
    _mav_put_int16_t(buf, 12, coolant);
    _mav_put_uint16_t(buf, 14, rpm);
    _mav_put_int16_t(buf, 16, barometer);
    _mav_put_int16_t(buf, 18, tps);
    _mav_put_int16_t(buf, 20, batteryVoltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN);
#else
    mavlink_ar_efi_telemetry_t packet;
    packet.fuel_instant = fuel_instant;
    packet.fuel_consumed = fuel_consumed;
    packet.fuel_remaining = fuel_remaining;
    packet.coolant = coolant;
    packet.rpm = rpm;
    packet.barometer = barometer;
    packet.tps = tps;
    packet.batteryVoltage = batteryVoltage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AR_EFI_TELEMETRY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_CRC);
}

/**
 * @brief Pack a ar_efi_telemetry message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param coolant [dc degree F] coolant degree, deci Farenheit
 * @param rpm [rpm] RPM.
 * @param barometer [kPa] barometric pressure measured by ecu.
 * @param tps [%] throttle position.
 * @param batteryVoltage [V] battery voltage.
 * @param fuel_instant [NK] fuel instant consumption.
 * @param fuel_consumed [NK] fuel consumed.
 * @param fuel_remaining [NK] fuel remaining.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ar_efi_telemetry_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t coolant,uint16_t rpm,int16_t barometer,int16_t tps,int16_t batteryVoltage,float fuel_instant,float fuel_consumed,float fuel_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN];
    _mav_put_float(buf, 0, fuel_instant);
    _mav_put_float(buf, 4, fuel_consumed);
    _mav_put_float(buf, 8, fuel_remaining);
    _mav_put_int16_t(buf, 12, coolant);
    _mav_put_uint16_t(buf, 14, rpm);
    _mav_put_int16_t(buf, 16, barometer);
    _mav_put_int16_t(buf, 18, tps);
    _mav_put_int16_t(buf, 20, batteryVoltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN);
#else
    mavlink_ar_efi_telemetry_t packet;
    packet.fuel_instant = fuel_instant;
    packet.fuel_consumed = fuel_consumed;
    packet.fuel_remaining = fuel_remaining;
    packet.coolant = coolant;
    packet.rpm = rpm;
    packet.barometer = barometer;
    packet.tps = tps;
    packet.batteryVoltage = batteryVoltage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AR_EFI_TELEMETRY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_CRC);
}

/**
 * @brief Encode a ar_efi_telemetry struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ar_efi_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ar_efi_telemetry_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ar_efi_telemetry_t* ar_efi_telemetry)
{
    return mavlink_msg_ar_efi_telemetry_pack(system_id, component_id, msg, ar_efi_telemetry->coolant, ar_efi_telemetry->rpm, ar_efi_telemetry->barometer, ar_efi_telemetry->tps, ar_efi_telemetry->batteryVoltage, ar_efi_telemetry->fuel_instant, ar_efi_telemetry->fuel_consumed, ar_efi_telemetry->fuel_remaining);
}

/**
 * @brief Encode a ar_efi_telemetry struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ar_efi_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ar_efi_telemetry_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ar_efi_telemetry_t* ar_efi_telemetry)
{
    return mavlink_msg_ar_efi_telemetry_pack_chan(system_id, component_id, chan, msg, ar_efi_telemetry->coolant, ar_efi_telemetry->rpm, ar_efi_telemetry->barometer, ar_efi_telemetry->tps, ar_efi_telemetry->batteryVoltage, ar_efi_telemetry->fuel_instant, ar_efi_telemetry->fuel_consumed, ar_efi_telemetry->fuel_remaining);
}

/**
 * @brief Send a ar_efi_telemetry message
 * @param chan MAVLink channel to send the message
 *
 * @param coolant [dc degree F] coolant degree, deci Farenheit
 * @param rpm [rpm] RPM.
 * @param barometer [kPa] barometric pressure measured by ecu.
 * @param tps [%] throttle position.
 * @param batteryVoltage [V] battery voltage.
 * @param fuel_instant [NK] fuel instant consumption.
 * @param fuel_consumed [NK] fuel consumed.
 * @param fuel_remaining [NK] fuel remaining.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ar_efi_telemetry_send(mavlink_channel_t chan, int16_t coolant, uint16_t rpm, int16_t barometer, int16_t tps, int16_t batteryVoltage, float fuel_instant, float fuel_consumed, float fuel_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN];
    _mav_put_float(buf, 0, fuel_instant);
    _mav_put_float(buf, 4, fuel_consumed);
    _mav_put_float(buf, 8, fuel_remaining);
    _mav_put_int16_t(buf, 12, coolant);
    _mav_put_uint16_t(buf, 14, rpm);
    _mav_put_int16_t(buf, 16, barometer);
    _mav_put_int16_t(buf, 18, tps);
    _mav_put_int16_t(buf, 20, batteryVoltage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_EFI_TELEMETRY, buf, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_CRC);
#else
    mavlink_ar_efi_telemetry_t packet;
    packet.fuel_instant = fuel_instant;
    packet.fuel_consumed = fuel_consumed;
    packet.fuel_remaining = fuel_remaining;
    packet.coolant = coolant;
    packet.rpm = rpm;
    packet.barometer = barometer;
    packet.tps = tps;
    packet.batteryVoltage = batteryVoltage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_EFI_TELEMETRY, (const char *)&packet, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_CRC);
#endif
}

/**
 * @brief Send a ar_efi_telemetry message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ar_efi_telemetry_send_struct(mavlink_channel_t chan, const mavlink_ar_efi_telemetry_t* ar_efi_telemetry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ar_efi_telemetry_send(chan, ar_efi_telemetry->coolant, ar_efi_telemetry->rpm, ar_efi_telemetry->barometer, ar_efi_telemetry->tps, ar_efi_telemetry->batteryVoltage, ar_efi_telemetry->fuel_instant, ar_efi_telemetry->fuel_consumed, ar_efi_telemetry->fuel_remaining);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_EFI_TELEMETRY, (const char *)ar_efi_telemetry, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_CRC);
#endif
}

#if MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ar_efi_telemetry_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t coolant, uint16_t rpm, int16_t barometer, int16_t tps, int16_t batteryVoltage, float fuel_instant, float fuel_consumed, float fuel_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, fuel_instant);
    _mav_put_float(buf, 4, fuel_consumed);
    _mav_put_float(buf, 8, fuel_remaining);
    _mav_put_int16_t(buf, 12, coolant);
    _mav_put_uint16_t(buf, 14, rpm);
    _mav_put_int16_t(buf, 16, barometer);
    _mav_put_int16_t(buf, 18, tps);
    _mav_put_int16_t(buf, 20, batteryVoltage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_EFI_TELEMETRY, buf, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_CRC);
#else
    mavlink_ar_efi_telemetry_t *packet = (mavlink_ar_efi_telemetry_t *)msgbuf;
    packet->fuel_instant = fuel_instant;
    packet->fuel_consumed = fuel_consumed;
    packet->fuel_remaining = fuel_remaining;
    packet->coolant = coolant;
    packet->rpm = rpm;
    packet->barometer = barometer;
    packet->tps = tps;
    packet->batteryVoltage = batteryVoltage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AR_EFI_TELEMETRY, (const char *)packet, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_CRC);
#endif
}
#endif

#endif

// MESSAGE AR_EFI_TELEMETRY UNPACKING


/**
 * @brief Get field coolant from ar_efi_telemetry message
 *
 * @return [dc degree F] coolant degree, deci Farenheit
 */
static inline int16_t mavlink_msg_ar_efi_telemetry_get_coolant(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field rpm from ar_efi_telemetry message
 *
 * @return [rpm] RPM.
 */
static inline uint16_t mavlink_msg_ar_efi_telemetry_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field barometer from ar_efi_telemetry message
 *
 * @return [kPa] barometric pressure measured by ecu.
 */
static inline int16_t mavlink_msg_ar_efi_telemetry_get_barometer(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field tps from ar_efi_telemetry message
 *
 * @return [%] throttle position.
 */
static inline int16_t mavlink_msg_ar_efi_telemetry_get_tps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field batteryVoltage from ar_efi_telemetry message
 *
 * @return [V] battery voltage.
 */
static inline int16_t mavlink_msg_ar_efi_telemetry_get_batteryVoltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field fuel_instant from ar_efi_telemetry message
 *
 * @return [NK] fuel instant consumption.
 */
static inline float mavlink_msg_ar_efi_telemetry_get_fuel_instant(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field fuel_consumed from ar_efi_telemetry message
 *
 * @return [NK] fuel consumed.
 */
static inline float mavlink_msg_ar_efi_telemetry_get_fuel_consumed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field fuel_remaining from ar_efi_telemetry message
 *
 * @return [NK] fuel remaining.
 */
static inline float mavlink_msg_ar_efi_telemetry_get_fuel_remaining(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a ar_efi_telemetry message into a struct
 *
 * @param msg The message to decode
 * @param ar_efi_telemetry C-struct to decode the message contents into
 */
static inline void mavlink_msg_ar_efi_telemetry_decode(const mavlink_message_t* msg, mavlink_ar_efi_telemetry_t* ar_efi_telemetry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ar_efi_telemetry->fuel_instant = mavlink_msg_ar_efi_telemetry_get_fuel_instant(msg);
    ar_efi_telemetry->fuel_consumed = mavlink_msg_ar_efi_telemetry_get_fuel_consumed(msg);
    ar_efi_telemetry->fuel_remaining = mavlink_msg_ar_efi_telemetry_get_fuel_remaining(msg);
    ar_efi_telemetry->coolant = mavlink_msg_ar_efi_telemetry_get_coolant(msg);
    ar_efi_telemetry->rpm = mavlink_msg_ar_efi_telemetry_get_rpm(msg);
    ar_efi_telemetry->barometer = mavlink_msg_ar_efi_telemetry_get_barometer(msg);
    ar_efi_telemetry->tps = mavlink_msg_ar_efi_telemetry_get_tps(msg);
    ar_efi_telemetry->batteryVoltage = mavlink_msg_ar_efi_telemetry_get_batteryVoltage(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN? msg->len : MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN;
        memset(ar_efi_telemetry, 0, MAVLINK_MSG_ID_AR_EFI_TELEMETRY_LEN);
    memcpy(ar_efi_telemetry, _MAV_PAYLOAD(msg), len);
#endif
}
