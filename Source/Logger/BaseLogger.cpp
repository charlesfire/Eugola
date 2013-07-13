#include "BaseLogger.hpp"

Eu::BaseLogger::BaseLogger() : m_minimumErrorLevel(FATAL_ERROR)
{
    //ctor
}

Eu::BaseLogger::~BaseLogger()
{
    //dtor
}

void Eu::BaseLogger::setMinimumErrorLevel(ErrorLevel newMinimumErrorLevel)
{
    m_minimumErrorLevel=newMinimumErrorLevel;
}
