#include "Coffee.h"
#include <iostream>
using namespace std;

Coffee::Coffee()
{
    cout << "Making some coffee\n";
}
void Coffee::setCaffeine(bool caffeine)
{
    this->caffeine = caffeine;
}
bool Coffee::getCaffeine() const
{
   return caffeine;
}
void Coffee::print() const
{
    cout << "The coffee is flavored " << flavor << endl;
    cout << "The coffee is " << (carbonated ? "" : "not ")
        << "carbonated\n";
    cout << "It " << (caffeine ? "is" : "is not") << " caffeinated\n";
}
