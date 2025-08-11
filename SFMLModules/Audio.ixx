module;

#include <SFML/Audio.hpp>

export module sfml.audio;

export import sfml.system;

export namespace sf {
    using sf::InputSoundFile;
    namespace Listener {
        using sf::Listener::Cone;

        using sf::Listener::setGlobalVolume;
        using sf::Listener::getGlobalVolume;
        using sf::Listener::setPosition;
        using sf::Listener::getPosition;
        using sf::Listener::setDirection;
        using sf::Listener::getDirection;
        using sf::Listener::setVelocity;
        using sf::Listener::getVelocity;
        using sf::Listener::setCone;
        using sf::Listener::getCone;
        using sf::Listener::setUpVector;
        using sf::Listener::getUpVector;
    }
    using sf::Music;
    using sf::OutputSoundFile;
    namespace PlaybackDevice {
        using sf::PlaybackDevice::getAvailableDevices;
        using sf::PlaybackDevice::getDefaultDevice;
        using sf::PlaybackDevice::setDevice;
        using sf::PlaybackDevice::getDevice;
    }
    using sf::Sound;
    using sf::SoundBuffer;
    using sf::SoundBufferRecorder;
    using sf::SoundChannel;
    using sf::SoundFileFactory;
    using sf::SoundFileReader;
    using sf::SoundFileWriter;
    using sf::SoundRecorder;
    using sf::SoundSource;
    using sf::SoundStream;
}