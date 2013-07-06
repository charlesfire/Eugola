#ifndef LOGGERMANAGER_HPP
#define LOGGERMANAGER_HPP

#include <vector>
#include <SFML/System/String.hpp>
#include "../Singleton/Singleton.hpp"
#include "BaseLogger.hpp"
#include "../Utils/Date.hpp"

class LoggerManager : public Singleton<LoggerManager>
{
    public:
        friend Singleton<LoggerManager>;
        void addLogger(BaseLogger& logger);
        void write(const std::string& message, ErrorLevel errorLevel=FATAL_ERROR)const;
        virtual ~LoggerManager();
        LoggerManager& operator<<(const std::string& message)
        {
            write(message);
        }
    private:
        LoggerManager();
        std::vector<BaseLogger*> m_loggerList;
};

#endif // LOGGERMANAGER_HPP
