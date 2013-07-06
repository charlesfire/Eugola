#include "NetworkLogger.hpp"

NetworkLogger::NetworkLogger()
{
    //ctor
}

NetworkLogger::NetworkLogger(sf::Packet& newPacket) : m_packet(&newPacket)
{

}

NetworkLogger::~NetworkLogger()
{
    //dtor
}

void NetworkLogger::setPacket(sf::Packet& newPacket)
{
    m_packet=&newPacket;
}

void NetworkLogger::write(const std::string& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel&&m_packet!=nullptr)
        *m_packet<<sf::String(message);
}
