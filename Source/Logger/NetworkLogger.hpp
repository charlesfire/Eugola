#ifndef NETWORKLOGGER_HPP
#define NETWORKLOGGER_HPP

#include <SFML/Network.hpp>
#include "BaseLogger.hpp"

class NetworkLogger : public BaseLogger
{
    public:
        NetworkLogger();
        NetworkLogger(sf::Packet& newPacket);
        void setPacket(sf::Packet& newPacket);
        virtual ~NetworkLogger();
    private:
        virtual void write(const std::string& message, ErrorLevel errorLevel=FATAL_ERROR);
        sf::Packet* m_packet;
};

#endif // NETWORKLOGGER_HPP
