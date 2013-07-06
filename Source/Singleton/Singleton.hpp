#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <SFML/Network.hpp>

template<typename T>
class Singleton
{
    public:
        static T* getInstance()
        {
            if(m_singleton==nullptr)
            {
                m_mutex.lock();
                if(m_singleton==nullptr)
                {
                    m_singleton=new T;
                }
                m_mutex.unlock();
            }
            return (static_cast<T*> (m_singleton));
        }
        static void kill()
        {
            delete m_singleton;
            m_singleton=nullptr;
        }
    protected:
        Singleton<T>()
        {

        }
        virtual ~Singleton()
        {
            kill();
        }
    private:
        static T* m_singleton;
        static sf::Mutex m_mutex;
        Singleton(Singleton& single);
        void operator= (Singleton& single);
};

template<class T>
T* Singleton<T>::m_singleton=nullptr;
template<class T>
sf::Mutex Singleton<T>::m_mutex;

#endif // SINGLETON_HPP
