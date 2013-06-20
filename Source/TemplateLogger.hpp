#ifndef BASELOGGER_HPP
#define BASELOGGER_HPP

#include <iostream>
#include "Singleton/Singleton.hpp"
#include "Util.hpp"
#include "BaseLogger.hpp"

template<class T>
class TemplateLogger : public Singleton<TemplateLogger<T>>, protected BaseLogger
{
    public:
        TemplateLogger();
        TemplateLogger(T* newLogStream);
        virtual void write(sf::String& message);
        virtual ~TemplateLogger();
    protected:
        T* logStream;
};

#endif // BASELOGGER_HPP
