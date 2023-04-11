#ifndef BASEORDER_H_
#define BASEORDER_H_

#include <string>
#include <iostream>
#include <ostream>
#include "Waiter.h"

class BaseOrder
{
public:

    BaseOrder(int orderID, int food, int drink, int orderType, int waiterID);
    virtual ~BaseOrder();
    virtual void calculateOrderPrice() = 0;
    virtual int getOrderID();
    virtual double getPrice();
    virtual int getFood();
    virtual int getDrink();
    virtual int getOrderType();
    virtual void printWaiterName();
    virtual std::string getFoodName(int food) const;
    virtual std::string getDrinkName(int drink) const;
    virtual std::string getOrderTypeName(int type) const;

protected:

    Waiter* pWaiter = new Waiter();
    int orderID_m;
    double price_m;
    int food_m;
    int drink_m;
    int orderType_m;
};
#endif // BASEORDER_H_
