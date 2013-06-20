#ifndef LOGGERMANAGER_HPP
#define LOGGERMANAGER_HPP

#include <vector>
#include "TemplateLogger.hpp"

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
