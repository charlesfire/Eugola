#include "NetworkLogger.hpp"

Eu::NetworkLogger::NetworkLogger()
{
    //ctor
}

Eu::NetworkLogger::NetworkLogger(sf::Packet& newPacket) : m_packet(&newPacket)
{

}

Eu::NetworkLogger::~NetworkLogger()
{
    //dtor
}

void Eu::NetworkLogger::setPacket(sf::Packet& newPacket)
{
    m_packet=&newPacket;
}

void Eu::NetworkLogger::write(const std::string& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel&&m_packet!=nullptr)
        *m_packet<<sf::String(message);
}
