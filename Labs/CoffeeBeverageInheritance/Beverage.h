#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
using namespace std;

class Beverage
{
    protected:
        string flavor;
        bool carbonated;
    public:
        Beverage();
        void setFlavor(string);
        void setCarbonated(bool);
        string getFlavor() const;
        bool getCarbonated() const;
};

#endif // BEVERAGE_H
