#include "NetworkLogger.hpp"

NetworkLogger::NetworkLogger()
{
    //ctor
}

NetworkLogger::~NetworkLogger()
{
    //dtor
}

void NetworkLogger::setPacket(sf::Packet& newPacket)
{
    m_packet=&newPacket;
}

bool NetworkLogger::write(const sf::String& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel&&m_packet!=nullptr)
    {
        *m_packet<<sf::String(errorLevel+": "+getStringDate()+"\tError: "+message+"\n");
    }
}
