#ifndef BASELOGGER_HPP
#define BASELOGGER_HPP

#include <SFML/System/String.hpp>

class BaseLogger
{
    protected:
        BaseLogger();
        virtual void write(sf::String& message)=0;
        virtual ~BaseLogger();
};

#endif // BASELOGGER_HPP
