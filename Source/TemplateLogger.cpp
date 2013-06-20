#include "TemplateLogger.hpp"

template<class T>
TemplateLogger<T>::TemplateLogger() : logStream(nullptr)
{
    //ctor
}

template<class T>
TemplateLogger<T>::TemplateLogger(T* newLogStream) : logStream(newLogStream)
{

}

template<class T>
TemplateLogger<T>::~TemplateLogger()
{
    //dtor
}

template<class T>
void TemplateLogger<T>::write(sf::String& message)
{
    logStream<<getStringDate()<<message<<std::endl;
}
