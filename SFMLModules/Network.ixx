module;

#include <SFML/Network.hpp>

export module sfml.network;

export import sfml.system;

export namespace sf {
    using sf::Ftp;
    using sf::Http;
    using sf::IpAddress;
    using sf::Packet;
    using sf::Socket;
    using sf::SocketHandle;
    using sf::SocketSelector;
    using sf::TcpListener;
    using sf::TcpSocket;
    using sf::UdpSocket;

    using sf::operator==;
    using sf::operator!=;
    using sf::operator<;
    using sf::operator>;
    using sf::operator<=;
    using sf::operator>=;
    using sf::operator>>;
    using sf::operator<<;
}