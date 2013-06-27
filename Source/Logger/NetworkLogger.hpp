#ifndef NETWORKLOGGER_HPP
#define NETWORKLOGGER_HPP

#include <SFML/Network.hpp>
#include "BaseLogger.hpp"

class NetworkLogger : public BaseLogger
{
    public:
        NetworkLogger();
        void setPacket(sf::Packet& newPacket);
        virtual bool write(const sf::String& message, ErrorLevel errorLevel=FATAL_ERROR);
        virtual ~NetworkLogger();
        NetworkLogger& operator<<(const sf::String& message)
        {
            write(message);
            return *this;
        }
    private:
        sf::Packet* m_packet;
};

#endif // NETWORKLOGGER_HPP
