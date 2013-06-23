#ifndef TEMPLATELOGGER_HPP
#define TEMPLATELOGGER_HPP

#include <iostream>
#include <SFML/System/String.hpp>
#include "Util.hpp"
#include "BaseLogger.hpp"

template<class T>
class TemplateLogger : protected BaseLogger
{
    public:
        TemplateLogger();
        TemplateLogger(T& newLogStream);
        void setLogStream(T& newLogStream);
        void setMinimumErrorLevel(ErrorLevel newMinimumErrorLevel);
        virtual void write(sf::String& message, ErrorLevel errorLevel=FATAL_ERROR);
        virtual ~TemplateLogger();
    protected:
        T* m_logStream;
        ErrorLevel m_minimumErrorLevel;
};

#endif // TEMPLATELOGGER_HPP
