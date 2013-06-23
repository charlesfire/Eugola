#ifndef LOGGERMANAGER_HPP
#define LOGGERMANAGER_HPP

#include <iostream>
#include <vector>
#include <SFML/System/String.hpp>
#include "Singleton/Singleton.hpp"
#include "TemplateLogger.hpp"
#include "BaseLogger.hpp"

class LoggerManager : public Singleton<LoggerManager>
{
    public:
        LoggerManager();
        template<class T>
        void addLogger(TemplateLogger<T>& logger);
        virtual ~LoggerManager();
    private:
        std::vector<BaseLogger*> loggerList;
};

#endif // LOGGERMANAGER_HPP
