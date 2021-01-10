// MESSAGE AR_ADC support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief AR_ADC message
 *
 * Arys adc ads1115.
 */
struct AR_ADC : mavlink::Message {
    static constexpr msgid_t MSG_ID = 11101;
    static constexpr size_t LENGTH = 17;
    static constexpr size_t MIN_LENGTH = 17;
    static constexpr uint8_t CRC_EXTRA = 30;
    static constexpr auto NAME = "AR_ADC";


    uint8_t status; /*<  status of adc, 1 ok 0 not ok. */
    float adc0; /*< [mV] mv measured. */
    float adc1; /*< [mV] mv measured. */
    float adc2; /*< [mV] mv measured. */
    float adc3; /*< [mV] mv measured. */


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
        ss << "  status: " << +status << std::endl;
        ss << "  adc0: " << adc0 << std::endl;
        ss << "  adc1: " << adc1 << std::endl;
        ss << "  adc2: " << adc2 << std::endl;
        ss << "  adc3: " << adc3 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << adc0;                          // offset: 0
        map << adc1;                          // offset: 4
        map << adc2;                          // offset: 8
        map << adc3;                          // offset: 12
        map << status;                        // offset: 16
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> adc0;                          // offset: 0
        map >> adc1;                          // offset: 4
        map >> adc2;                          // offset: 8
        map >> adc3;                          // offset: 12
        map >> status;                        // offset: 16
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
