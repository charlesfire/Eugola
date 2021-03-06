#ifndef CONSOLELOGGER_HPP
#define CONSOLELOGGER_HPP

#include <iostream>
#include "BaseLogger.hpp"
#include "../Utils/Singleton.hpp"

namespace Eu
{
    class ConsoleLogger : public BaseLogger, public Singleton<ConsoleLogger>
    {
        public:
            friend Singleton<ConsoleLogger>;
            virtual ~ConsoleLogger();
        private:
            ConsoleLogger();
            virtual void write(const std::string& message, ErrorLevel errorLevel=FATAL_ERROR);
    };
}

#endif // CONSOLELOGGER_HPP
