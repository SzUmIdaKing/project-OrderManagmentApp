#ifndef ORDERCONTAINER_H_
#define ORDERCONTAINER_H_

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "BaseOrder.h"

class OrderContainer
{
public:

    OrderContainer();
    ~OrderContainer();

    void addOrder(BaseOrder* order);
    void removeOrder(int orderID);
    std::vector <BaseOrder*> getOrders() const;
    friend std::ostream& operator<<(std::ostream& os, const OrderContainer& orderContainer);

private:

    std::vector <BaseOrder*> orders;
};
#endif // ORDERCONTAINER_H_
