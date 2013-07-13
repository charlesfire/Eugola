#include "FileLogger.hpp"

Eu::FileLogger::FileLogger() : m_logStream()
{
    //ctor
}

Eu::FileLogger::FileLogger(const std::string& logFilePath) : m_logStream()
{
    m_logStream.open(logFilePath, std::ios::out|std::ios::app);
}

Eu::FileLogger::~FileLogger()
{
    m_logStream.close();
}

void Eu::FileLogger::setLogFile(const std::string& logFilePath)
{
    m_logStream.close();
    m_logStream.open(logFilePath, std::ios::out|std::ios::app);
}

void Eu::FileLogger::write(const std::string& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel&&m_logStream.is_open())
        m_logStream<<message;
}
