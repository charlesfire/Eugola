#include "FileLogger.hpp"

FileLogger::FileLogger() : m_logStream()
{
    //ctor
}

FileLogger::FileLogger(const std::string& logFilePath) : m_logStream()
{
    m_logStream.open(logFilePath, std::ios::out|std::ios::app);
}

FileLogger::~FileLogger()
{
    m_logStream.close();
}

void FileLogger::setLogFile(const std::string& logFilePath)
{
    m_logStream.close();
    m_logStream.open(logFilePath, std::ios::out|std::ios::app);
}

void FileLogger::write(const std::string& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel&&m_logStream.is_open())
        m_logStream<<message;
}
