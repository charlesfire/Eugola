#ifndef CONSOLELOGGER_HPP
#define CONSOLELOGGER_HPP

#include <iostream>
#include "BaseLogger.hpp"
#include "../Singleton/Singleton.hpp"

class ConsoleLogger : public BaseLogger, public Singleton<ConsoleLogger>
{
    public:
        ConsoleLogger();
        virtual bool write(const sf::String& message, ErrorLevel errorLevel=FATAL_ERROR);
        virtual ~ConsoleLogger();
        ConsoleLogger& operator<<(const sf::String& message)
        {
            write(message);
            return *this;
        }
};

#endif // CONSOLELOGGER_HPP
