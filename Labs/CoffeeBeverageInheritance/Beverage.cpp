#include "Beverage.h"
#include <string>
#include <iostream>
using namespace std;

Beverage::Beverage()
{
    cout << "Beverage is being made\n";
}
void Beverage::setFlavor(string flavor)
{
    this->flavor = flavor;
}
void Beverage::setCarbonated(bool carbonated)
{
    this->carbonated = carbonated;
}
string Beverage::getFlavor() const
{
    return flavor;
}
bool Beverage::getCarbonated() const
{
    return carbonated;
}
