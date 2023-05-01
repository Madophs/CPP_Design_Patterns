#include <iostream>
#include "html_builder.h"

using namespace std;

int main()
{
    HTMLBuilder ul("ul");
    ul.addChildren("li", "strawberry")->addChildren("li", "watermelon")->addChildren("li", "banana");
    cout << ul.str() << endl;
    return 0;
}
