module;

#include <SFML/Config.hpp>
#include <SFML/System.hpp>
#include <SFML/System/SuspendAwareClock.hpp>

export module sfml.system;

export namespace sf {
    using sf::Angle;
    using sf::Clock;
    using sf::Exception;
    using sf::FileInputStream;
    using sf::InputStream;
    using sf::MemoryInputStream;
    using sf::U8StringCharTraits;
    using sf::String;
    using sf::U8String;
    using sf::SuspendAwareClock;
    using sf::Time;
    using sf::Utf;
    using sf::Utf8;
    using sf::Utf16;
    using sf::Utf32;
    using sf::Vector2;
    using sf::Vector2i;
    using sf::Vector2u;
    using sf::Vector2f;
    using sf::Vector3;
    using sf::Vector3i;
    using sf::Vector3f;

    using sf::degrees;
    using sf::radians;
    using sf::err;
    using sf::sleep;

    constexpr inline int VERSION_MAJOR = SFML_VERSION_MAJOR;
    constexpr inline int VERSION_MINOR = SFML_VERSION_MINOR;
    constexpr inline int VERSION_PATCH = SFML_VERSION_PATCH;
    constexpr inline bool VERSION_IS_RELEASE = SFML_VERSION_IS_RELEASE;
}