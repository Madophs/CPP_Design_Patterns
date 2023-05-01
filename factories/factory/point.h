#pragma once

class Point
{
    public:
        double getX() const { return x;}
        double getY() const { return y;}
        friend class PointFactory;
    protected:
        Point(double x, double y);
        double x, y;
};
