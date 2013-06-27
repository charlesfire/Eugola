#include "ConsoleLogger.hpp"

ConsoleLogger::ConsoleLogger()
{
    //ctor
}

ConsoleLogger::~ConsoleLogger()
{
    //dtor
}

bool ConsoleLogger::write(const sf::String& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel)
    {
        std::cerr<<errorLevel<<": "<<getStringDate().toAnsiString()<<"\tError: "<<message.toAnsiString()<<std::endl;
    }
}
