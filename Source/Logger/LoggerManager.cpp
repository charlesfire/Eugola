#include "LoggerManager.hpp"

LoggerManager::LoggerManager()
{
    //ctor
}

LoggerManager::~LoggerManager()
{
    //dtor
}

void LoggerManager::addLogger(BaseLogger* logger)
{
    m_loggerList.push_back(std::shared_ptr<BaseLogger>(logger));
}

void LoggerManager::write(const std::string& message, ErrorLevel errorLevel)const
{
    const std::string tempErrorMessage(getStringDate()+"--->"+"Error:"+message+"\n");
    for(unsigned i(0); i<m_loggerList.size(); i++)
    {
        m_loggerList[i]->write(tempErrorMessage, errorLevel);
    }
}
