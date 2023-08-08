#include <iostream>
#include <vector>
#include <math.h>

// Inner Factory Example

struct Point
{
    private:
        Point(float x, float y) : x(x), y(y) {}

        struct PointFactory
        {
            private:
                PointFactory() {}
            
            public:
                static Point NewCartesian(float x, float y)
                {
                    return Point{x, y};
                }

                static Point NewPolar(float r, float theta)
                {
                    return Point{r*cos(theta), r*sin(theta)};
                }

        };
    public:
        float x, y;
        static PointFactory Factory;
};
