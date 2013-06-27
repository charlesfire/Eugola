#include "Date.hpp"

sf::String getStringDate()
{
    time_t t=time(0);
    sf::String stringDate=(std::string(asctime(localtime(&t))));
    return stringDate;
}
