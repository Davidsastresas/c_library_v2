// MESSAGE ARYS_ACC support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief ARYS_ACC message
 *
 * Arys. Accelerations derived from airspeed and groundspeed.
 */
struct ARYS_ACC : mavlink::Message {
    static constexpr msgid_t MSG_ID = 11050;
    static constexpr size_t LENGTH = 8;
    static constexpr size_t MIN_LENGTH = 8;
    static constexpr uint8_t CRC_EXTRA = 127;
    static constexpr auto NAME = "ARYS_ACC";


    float grndacc; /*< [m/s/s] groundspeed acceleration. */
    float arspdacc; /*< [m/s/s] airspeed acceleration. */


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
        ss << "  grndacc: " << grndacc << std::endl;
        ss << "  arspdacc: " << arspdacc << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << grndacc;                       // offset: 0
        map << arspdacc;                      // offset: 4
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> grndacc;                       // offset: 0
        map >> arspdacc;                      // offset: 4
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
