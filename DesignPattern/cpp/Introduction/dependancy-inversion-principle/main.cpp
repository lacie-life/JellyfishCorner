#include <iostream>
#include <fstream>
#include <vector>

struct Engine
{
    float volume = 5;
    int horse_power = 400;

    friend std::ostream& operator<< (std::ostream& os, const Engine& obj)
    {
    return os
        << "volume: " << obj.volume
        << " horse_power: " << obj.horse_power;
    }
};

struct ILogger
{
    virtual ~ILogger() {}
    virtual void Log(const std::string& s) = 0;
};

struct ConsoleLogger : ILogger
{
    ConsoleLogger() {}

    void Log(const std::string& s) override
    {
        std::cout << "LOG: " << s.c_str() << std::endl;
    }
};

struct Car
{
    std::unique_ptr<Engine> engine;
    std::shared_ptr<ILogger> logger;

    Car(std::unique_ptr<Engine> engine,
        const std::shared_ptr<ILogger>& logger)
    : engine{move(engine)},
      logger{logger}
    {
        logger->Log("making a car");
    }

    friend std::ostream& operator<<(std::ostream& os, const Car& obj)
    {
        return os << "car with engine: " << *obj.engine;
    }
};
