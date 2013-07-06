#include "Date.hpp"

std::string getStringDate()
{
    time_t t=time(0);
    return std::string(asctime(localtime(&t)));
}
