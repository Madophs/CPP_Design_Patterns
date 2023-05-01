#include "point_factory.h"
#include <cmath>

Point PointFactory::newCartesian(double x, double y)
{
    return Point{x, y};
}

Point PointFactory::newPolar(double r, double theta)
{
    return Point{r * std::cos(theta), r * std::sin(theta)};
}
