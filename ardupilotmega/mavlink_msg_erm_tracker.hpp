// MESSAGE ERM_TRACKER support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief ERM_TRACKER message
 *
 * ERM tracker feedback
 */
struct ERM_TRACKER : mavlink::Message {
    static constexpr msgid_t MSG_ID = 11050;
    static constexpr size_t LENGTH = 9;
    static constexpr size_t MIN_LENGTH = 9;
    static constexpr uint8_t CRC_EXTRA = 129;
    static constexpr auto NAME = "ERM_TRACKER";


    uint8_t Status; /*< [NA] Status. */
    uint16_t x0; /*< [coordinate] x0. */
    uint16_t x1; /*< [coordinate] x1. */
    uint16_t y0; /*< [coordinate] y0. */
    uint16_t y1; /*< [coordinate] y1. */


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
        ss << "  Status: " << +Status << std::endl;
        ss << "  x0: " << x0 << std::endl;
        ss << "  x1: " << x1 << std::endl;
        ss << "  y0: " << y0 << std::endl;
        ss << "  y1: " << y1 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << x0;                            // offset: 0
        map << x1;                            // offset: 2
        map << y0;                            // offset: 4
        map << y1;                            // offset: 6
        map << Status;                        // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> x0;                            // offset: 0
        map >> x1;                            // offset: 2
        map >> y0;                            // offset: 4
        map >> y1;                            // offset: 6
        map >> Status;                        // offset: 8
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
