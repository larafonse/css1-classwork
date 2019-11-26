#ifndef COFFEE_H
#define COFFEE_H

#include "Beverage.h"

class Coffee : public Beverage
{
    public:
        Coffee();
        void setCaffeine(bool);
        bool getCaffeine() const;
        void print() const;

    protected:
        bool caffeine;
};

#endif // COFFEE_H
