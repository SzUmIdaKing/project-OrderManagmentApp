#ifndef ONSITEORDER_H_
#define ONSITEORDER_H_

#include "BaseOrder.h"

class OnSiteOrder :public BaseOrder
{
public:

    OnSiteOrder(int orderID, int food, int drink, int orderType, int waiterID);
    ~OnSiteOrder();

    void calculateOrderPrice() override;
};
#endif // ONSITEORDER_H_
