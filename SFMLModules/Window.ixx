module;

#include <SFML/Window.hpp>

export module sfml.window;

export import sfml.system;

export using ::VkInstance;
export using ::VkSurfaceKHR;

export namespace sf {
    namespace Clipboard {
        using sf::Clipboard::getString;
        using sf::Clipboard::setString;
    }
    using sf::Context;
    using sf::GlFunctionPointer;
    using sf::ContextSettings;
    using sf::Cursor;
    using sf::Event;
    using sf::GlResource;
    using ContextDestroyCallback = void (*)(void*);
    namespace Joystick {
        using sf::Joystick::Identification;
        using sf::Joystick::Axis;
        using sf::Joystick::isConnected;
        using sf::Joystick::getButtonCount;
        using sf::Joystick::hasAxis;
        using sf::Joystick::isButtonPressed;
        using sf::Joystick::getAxisPosition;
        using sf::Joystick::getIdentification;
        using sf::Joystick::update;
    }
    namespace Keyboard {
        using sf::Keyboard::Scancode;
        using sf::Keyboard::Key;
        using sf::Keyboard::Scan;
        using sf::Keyboard::isKeyPressed;
        using sf::Keyboard::localize;
        using sf::Keyboard::delocalize;
        using sf::Keyboard::getDescription;
        using sf::Keyboard::setVirtualKeyboardVisible;
    }
    namespace Mouse {
        using sf::Mouse::Button;
        using sf::Mouse::Wheel;
        using sf::Mouse::isButtonPressed;
        using sf::Mouse::getPosition;
        using sf::Mouse::setPosition;
    }
    namespace Sensor {
        using sf::Sensor::Type;
        using sf::Sensor::isAvailable;
        using sf::Sensor::setEnabled;
        using sf::Sensor::getValue;
    }
    namespace Touch {
        using sf::Touch::isDown;
        using sf::Touch::getPosition;
    }
    using sf::VideoMode;
    namespace Vulkan {
        using sf::Vulkan::isAvailable;
        using sf::Vulkan::getFunction;
        using sf::Vulkan::getGraphicsRequiredInstanceExtensions;
    }
    using sf::VulkanFunctionPointer;
    using sf::Window;
    using sf::WindowBase;
    namespace Style {
        using sf::Style::None;
        using sf::Style::Titlebar;
        using sf::Style::Resize;
        using sf::Style::Close;
    }
    using sf::State;
    using sf::WindowHandle;
}