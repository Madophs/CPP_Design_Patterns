#pragma once

#include "point.h"

class PointFactory
{
    public:
        static Point newCartesian(double x, double y);

        static Point newPolar(double r, double theta);
    private:
        PointFactory() = delete;
        PointFactory(const PointFactory&) = delete;
};
