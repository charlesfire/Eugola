#include "BaseLogger.hpp"

BaseLogger::BaseLogger() : m_minimumErrorLevel(FATAL_ERROR)
{
    //ctor
}

BaseLogger::~BaseLogger()
{
    //dtor
}

void BaseLogger::setMinimumErrorLevel(ErrorLevel newMinimumErrorLevel)
{
    m_minimumErrorLevel=newMinimumErrorLevel;
}
