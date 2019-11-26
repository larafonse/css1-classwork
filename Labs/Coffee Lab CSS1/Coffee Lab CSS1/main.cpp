//
//  main.cpp
//  Coffee Lab CSS1
//
//  Created by Nicolas Lara on 11/25/19.
//  Copyright © 2019 Nicolas Lara. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Customers range is from 10 to 50
const int MAX_CUSTOMERS = 50;
const int MIN_CUSTOMERS = 10;
const int MENU_ITEMS = 10;
const int ARR_SIZE = MAX_CUSTOMERS;
const string menu[MENU_ITEMS] = {"Latte","Mocha", "Chai Latte", "Decaf", "Reg. Coffee",
    "Cappuccino", "Hot Chocolate", "Iced Coffee", "Vanilla Latte",
    "Caramel Latte"};
const double menu_cost[MENU_ITEMS] = {3.50, 4.00, 3.75, 2.00, 2.00, 3.00, 2.50, 3.00, 3.50,
    3.75};

// *************************************************************************
int generateCustomers();
// Description: This function creates a random number of customers.
// Preconditions:
// Postconditions: The function returns a number from 10 to 50 (inclusive)
// *************************************************************************
//
// *************************************************************************
void setCoffeeShopName(string& s);
// Description: This function asks the user for the coffee shop's name
// and assigns that name to s. This function should allow for spaces in the
// name.
// Preconditions:
// Postconditions: The coffee shop's name has been set.
// *************************************************************************
//
// *************************************************************************
double getCustomerMoney(double& store_balance, double order_cost);
// Description: This updates the store_balance with the amount sold through
// order_cost. The function also asks the user for amount paid uses this
// information to calculate and return the change amount.
// Preconditions: store_balance and order_cost are not negative.
// Postconditions: The function updates store_balance by adding order_cost
// and returns the change.
// *************************************************************************
//
// *************************************************************************
void generateOrder(string orders[], int quantity[],double totals[], int customer,
                   double& store_balance);
// Description: This function generates a random coffee order by generating
// a random number from 0 to 9 and uses that number to select the corresponding
// item in the array. It also generates a random number from 1 to 6 (inclusive) and
// uses this for the quantity. The function then displays the order as:
//    [Menu Item]   Qty: [3] Total: $ [total cost]
// * Note that [ ] is a placeholder for the values you generate.
// The function then gets the customer's money and displays their change (use the function
// getCustomerMoney to do this).
// Then the function stores the order, quantity and total cost in the corresponding
// arrays passed into the function.
// order.
// Preconditions: customer is a number from 10 to 50 (inclusive)
// Postconditions: Arrays orders, quantity, totals has been updated for the customer
// *************************************************************************
//
// *************************************************************************
void printSummary(string orders[], int quantity[],double totals[], int tot_customers,
                  double store_balance);
// Description: This function prints a summary of all of the purchases as a list.
// Each line on the list should follow the following format:
// Customer #     Order       Qty.      Total
// 1              Latte       2         $7.00
// 2              Latte       1         $3.50
// 3              Mocha       3         $12.00
// Store Balance: $22.50
// Customers Served: 3
// Preconditions: tot_customers is a value from 10 to 50. store_balance is not
// negative.
// Postconditions: The function printed all of the information
// *************************************************************************
//
// *************************************************************************
void runCoffeeShop();
// Description: This function starts off by setting up the number of customers
// (use function) and the store name. It should also have arrays for:
// order, quantities, and totals. It then prints "Welcome to [store name]"
// Then it runs through generating orders for the n customers. Once it has
// completed all of the orders, it prints a summary of the simulation.
// Preconditions:
// Postconditions: Coffee shop simulation runs
// *************************************************************************


int main() {
    srand(static_cast<unsigned>(time(NULL)));
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    runCoffeeShop();
    return 0;
}
int generateCustomers()
{
    int yes;
    return yes;
    
}
void setCoffeeShopName(string& s)
{
    
    
}
double getCustomerMoney(double& store_balance, double order_cost)
{
    
    return store_balance;
}
void generateOrder(string orders[], int quantity[],double totals[], int customer,
                   double& store_balance)
{
    
    
}
void printSummary(string orders[], int quantity[],double totals[], int tot_customers,
                  double store_balance)
{
    
    
}

void runCoffeeShop()
{
    
    
    
    
}
