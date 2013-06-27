#ifndef LOGGERMANAGER_HPP
#define LOGGERMANAGER_HPP

#include <vector>
#include <SFML/System/String.hpp>
#include "../Singleton/Singleton.hpp"
#include "BaseLogger.hpp"

class LoggerManager : public Singleton<LoggerManager>
{
    public:
        LoggerManager();
        template<class T>
        void addLogger(BaseLogger& logger);
        virtual ~LoggerManager();
    private:
        std::vector<BaseLogger*> loggerList;
};

#endif // LOGGERMANAGER_HPP
