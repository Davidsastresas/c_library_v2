// MESSAGE AR_EFI_TELEMETRY support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief AR_EFI_TELEMETRY message
 *
 * Arys efi telemetry
 */
struct AR_EFI_TELEMETRY : mavlink::Message {
    static constexpr msgid_t MSG_ID = 11100;
    static constexpr size_t LENGTH = 22;
    static constexpr size_t MIN_LENGTH = 22;
    static constexpr uint8_t CRC_EXTRA = 211;
    static constexpr auto NAME = "AR_EFI_TELEMETRY";


    int16_t coolant; /*< [dc degree F] coolant degree, deci Farenheit */
    uint16_t rpm; /*< [rpm] RPM. */
    int16_t barometer; /*< [kPa] barometric pressure measured by ecu. */
    int16_t tps; /*< [%] throttle position. */
    int16_t batteryVoltage; /*< [V] battery voltage. */
    float fuel_instant; /*< [NK] fuel instant consumption. */
    float fuel_consumed; /*< [NK] fuel consumed. */
    float fuel_remaining; /*< [NK] fuel remaining. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  coolant: " << coolant << std::endl;
        ss << "  rpm: " << rpm << std::endl;
        ss << "  barometer: " << barometer << std::endl;
        ss << "  tps: " << tps << std::endl;
        ss << "  batteryVoltage: " << batteryVoltage << std::endl;
        ss << "  fuel_instant: " << fuel_instant << std::endl;
        ss << "  fuel_consumed: " << fuel_consumed << std::endl;
        ss << "  fuel_remaining: " << fuel_remaining << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << fuel_instant;                  // offset: 0
        map << fuel_consumed;                 // offset: 4
        map << fuel_remaining;                // offset: 8
        map << coolant;                       // offset: 12
        map << rpm;                           // offset: 14
        map << barometer;                     // offset: 16
        map << tps;                           // offset: 18
        map << batteryVoltage;                // offset: 20
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> fuel_instant;                  // offset: 0
        map >> fuel_consumed;                 // offset: 4
        map >> fuel_remaining;                // offset: 8
        map >> coolant;                       // offset: 12
        map >> rpm;                           // offset: 14
        map >> barometer;                     // offset: 16
        map >> tps;                           // offset: 18
        map >> batteryVoltage;                // offset: 20
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
