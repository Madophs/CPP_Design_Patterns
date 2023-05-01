#include <iostream>
#include "point.h"
#include "point_factory.h"

using namespace std;

int main()
{
    Point cartisian = PointFactory::newCartesian(5.5, 8.8);
    cout << "Cartesian: (" << cartisian.getX() << " , " << cartisian.getY() << ")" << endl;

    Point polar = PointFactory::newPolar(5.5, 8.8);
    cout << "Polar: (" << polar.getX() << " , " << polar.getY() << ")" << endl;

    return 0;
}
