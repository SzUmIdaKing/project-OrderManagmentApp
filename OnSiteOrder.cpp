#include "OnSiteOrder.h"

OnSiteOrder::OnSiteOrder(int orderID, int food, int drink, int orderType, int waiterID) : BaseOrder(orderID, food, drink, orderType, waiterID)
{
}

OnSiteOrder::~OnSiteOrder()
{
}

void OnSiteOrder::calculateOrderPrice()
{
    price_m = 10.29 + 5.99;
}
