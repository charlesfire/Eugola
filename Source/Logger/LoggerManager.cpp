#include "LoggerManager.hpp"

Eu::LoggerManager::LoggerManager()
{
    //ctor
}

Eu::LoggerManager::~LoggerManager()
{
    //dtor
}

void Eu::LoggerManager::addLogger(BaseLogger* logger)
{
    m_loggerList.push_back(std::shared_ptr<BaseLogger>(logger));
}

void Eu::LoggerManager::write(const std::string& message, ErrorLevel errorLevel)const
{
    const std::string tempErrorMessage(getStringDate()+"--->"+"Error:"+message+"\n");
    for(unsigned i(0); i<m_loggerList.size(); i++)
    {
        m_loggerList[i]->write(tempErrorMessage, errorLevel);
    }
}
