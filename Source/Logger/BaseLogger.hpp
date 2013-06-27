#ifndef BASELOGGER_HPP
#define BASELOGGER_HPP

#include <SFML/System/String.hpp>
#include "../Utils/Date.hpp"

enum ErrorLevel : sf::Uint8 {NO_ERROR, WARNING, FATAL_ERROR};

class BaseLogger
{
    protected:
        BaseLogger();
        void setMinimumErrorLevel(ErrorLevel newMinimumErrorLevel);
        virtual bool write(const sf::String& message, ErrorLevel errorLevel=FATAL_ERROR)=0;
        virtual ~BaseLogger();
        ErrorLevel m_minimumErrorLevel;
};

#endif // BASELOGGER_HPP
