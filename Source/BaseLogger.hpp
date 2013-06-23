#ifndef BASELOGGER_HPP
#define BASELOGGER_HPP

#include <SFML/System/String.hpp>

enum ErrorLevel : sf::Uint8 {NO_ERROR, WARNING, FATAL_ERROR};

class BaseLogger
{
    protected:
        BaseLogger();
        virtual void write(sf::String& message, ErrorLevel errorLevel=FATAL_ERROR)=0;
        virtual ~BaseLogger();
};

#endif // BASELOGGER_HPP
