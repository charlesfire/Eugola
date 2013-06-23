#include "TemplateLogger.hpp"

template<class T>
TemplateLogger<T>::TemplateLogger() : m_logStream(nullptr), m_minimumErrorLevel(FATAL_ERROR)
{
    //ctor
}

template<class T>
TemplateLogger<T>::TemplateLogger(T& newLogStream) : m_logStream(newLogStream), m_minimumErrorLevel(FATAL_ERROR)
{

}

template<class T>
TemplateLogger<T>::~TemplateLogger()
{
    //dtor
}

template<class T>
void TemplateLogger<T>::setLogStream(T& newLogStream)
{
    m_logStream=newLogStream;
}

template<class T>
void TemplateLogger<T>::setMinimumErrorLevel(ErrorLevel newMinimumErrorLevel)
{
    m_minimumErrorLevel=newMinimumErrorLevel;
}

template<class T>
void TemplateLogger<T>::write(sf::String& message, ErrorLevel errorLevel)
{
    if(errorLevel>=m_minimumErrorLevel)
        m_logStream<<errorLevel<<":"<<getStringDate()<<message<<std::endl;
}
