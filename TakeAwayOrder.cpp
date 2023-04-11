#include "TakeAwayOrder.h"

TakeAwayOrder::TakeAwayOrder(int orderID, int food, int drink, int orderType, int waiterID) : BaseOrder(orderID, food, drink, orderType, waiterID)
{
    deliveryPrice_m = 10;
    packagePrice_m = 2.50;
}

TakeAwayOrder::~TakeAwayOrder()
{
}

void TakeAwayOrder::calculateOrderPrice()
{
    price_m = 10.29 + 5.99 + deliveryPrice_m + packagePrice_m;
}
