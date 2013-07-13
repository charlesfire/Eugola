#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <iostream>
#include "Logger/LoggerManager.hpp"
#include "Logger/ConsoleLogger.hpp"
#include "Logger/NetworkLogger.hpp"
#include "Logger/FileLogger.hpp"

int main()
{
    Eu::LoggerManager* log=Eu::LoggerManager::getInstance();
    std::shared_ptr<Eu::FileLogger> fLog(new Eu::FileLogger("out.log"));
    log->addLogger(fLog.get());
    *log<<"pizza";
    log->write("poutine");

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
