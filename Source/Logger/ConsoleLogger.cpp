#include "ConsoleLogger.hpp"

ConsoleLogger::ConsoleLogger()
{
    //ctor
}

ConsoleLogger::~ConsoleLogger()
{
    //dtor
}

void ConsoleLogger::write(const std::string& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel)
        std::cerr<<message<<std::endl;
}
