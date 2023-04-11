#ifndef TAKEAWAYORDER_H_
#define TAKEAWAYORDER_H_

#include "BaseOrder.h"

class TakeAwayOrder :public BaseOrder
{
public:

    TakeAwayOrder(int orderID, int food, int drink, int orderType, int waiterID);
    ~TakeAwayOrder();

    void calculateOrderPrice() override;

private:

    double deliveryPrice_m;
    double packagePrice_m;
};
#endif // TAKEAWAYORDER_H_
