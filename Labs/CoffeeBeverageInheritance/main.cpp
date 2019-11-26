#include <iostream>
#include "Coffee.h"

using namespace std;

int main()
{
    Coffee cafe;

    cafe.setCaffeine(true);
    cafe.setCarbonated(false);
    cafe.setFlavor("Honduras");

    cafe.print();

    return 0;
}
