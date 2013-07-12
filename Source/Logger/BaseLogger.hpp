#ifndef BASELOGGER_HPP
#define BASELOGGER_HPP

#include <SFML/System/String.hpp>

enum ErrorLevel : sf::Uint8 {NO_ERROR, WARNING, FATAL_ERROR, ULTIMATE_ERROR}; //never use ULTIMATE_ERROR

class LoggerManager;

class BaseLogger
{
    public:
        friend class LoggerManager;
        virtual ~BaseLogger();
    protected:
        BaseLogger();
        void setMinimumErrorLevel(ErrorLevel newMinimumErrorLevel);
        virtual void write(const std::string& message, ErrorLevel errorLevel=FATAL_ERROR)=0;
        ErrorLevel m_minimumErrorLevel;
};

#endif // BASELOGGER_HPP
