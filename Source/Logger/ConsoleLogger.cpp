#include "ConsoleLogger.hpp"

Eu::ConsoleLogger::ConsoleLogger()
{
    //ctor
}

Eu::ConsoleLogger::~ConsoleLogger()
{
    //dtor
}

void Eu::ConsoleLogger::write(const std::string& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel)
        std::cerr<<message<<std::endl;
}
