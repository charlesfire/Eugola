#ifndef SINGLETON_HPP
#define SINGLETON_HPP

template<typename T>
class Singleton
{
    public:
        static T* getInstance()
        {
            if(m_singleton==nullptr)
            {
                m_singleton=new T;
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

        }
    private:
        static T* m_singleton;
};

template<typename T>
T* Singleton<T>::m_singleton;

#endif // SINGLETON_HPP
