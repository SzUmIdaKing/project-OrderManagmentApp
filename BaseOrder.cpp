#include "BaseOrder.h"

BaseOrder::BaseOrder(int orderID, int food, int drink, int orderType, int waiterID)
{
    orderID_m = orderID;
    food_m = food;
    drink_m = drink;
    orderType_m = orderType;
    price_m = 0.0;
    pWaiter->setWaiterID(waiterID);
}

BaseOrder::~BaseOrder()
{
    delete pWaiter;
}
int BaseOrder::getOrderID()
{
    return orderID_m;
}

double BaseOrder::getPrice()
{
    return price_m;
}

int BaseOrder::getFood()
{
    return food_m;
}

int BaseOrder::getDrink()
{
    return drink_m;
}

int BaseOrder::getOrderType()
{
    return orderType_m;
}

std::string BaseOrder::getFoodName(int food) const
{
    if (food == 1)
        return "Hamburger";
    else if (food == 2)
        return "Cheeseburger";
    else if (food == 3)
        return "Frytki";
}

std::string BaseOrder::getDrinkName(int drink) const
{
    if (drink == 1)
        return "Cola";
    else if (drink == 2)
        return "Fanta";
    else if (drink == 3)
        return "Sprite";
}

std::string BaseOrder::getOrderTypeName(int type) const
{
    if (type == 1)
        return "Na miejscu";
    else if (type == 2)
        return "Na wynos";
}

void BaseOrder::printWaiterName()
{
    pWaiter->printWaiterName();
}
