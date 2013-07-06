#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include <fstream>
#include "BaseLogger.hpp"

class FileLogger : public BaseLogger
{
    public:
        FileLogger();
        FileLogger(const std::string& logFile);
        void setLogFile(const std::string& logFile);
        virtual ~FileLogger();
    private:
        virtual void write(const std::string& message, ErrorLevel errorLevel=FATAL_ERROR);
        std::ofstream m_logStream;
};

#endif // FILELOGGER_HPP
