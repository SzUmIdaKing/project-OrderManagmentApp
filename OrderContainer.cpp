#include "OrderContainer.h"

using namespace std;

OrderContainer::OrderContainer()
{
}

OrderContainer::~OrderContainer()
{
    for (size_t i = 0; i < orders.size(); i++)
        delete orders.at(i);
}

void OrderContainer::addOrder(BaseOrder* order)
{
    orders.push_back(order);
}

void OrderContainer::removeOrder(int orderID)
{
    vector<BaseOrder*>::iterator it;
    it = remove_if(orders.begin(), orders.end(), [&orderID](BaseOrder *order)
    {
        return order->getOrderID() == orderID;
    });

    if (it != orders.end())
    {
        cout << "Usunoles zamowienie z ID = " << orderID << endl;
        orders.erase(it);
    }
    else
        cout << "Podales nieprawidlowe ID zamowienia" << endl;
}

vector<BaseOrder*> OrderContainer::getOrders() const
{
    return orders;
}

ostream& operator<<(ostream& os, const OrderContainer& orderContainer)
{
    for (size_t i = 0; i < orderContainer.getOrders().size(); i++)
    {
        BaseOrder *order = orderContainer.getOrders()[i];

        os << "ID zamowienia: " << order->getOrderID() << endl
           << "Typ zamowienia: " << order->getOrderTypeName(order->getOrderType()) << endl
           << "Jedzenie: " << order->getFoodName(order->getFood()) << endl
           << "Napoj: " << order->getDrinkName(order->getDrink()) << endl
           << "Cena: " << order->getPrice() << endl <<endl;
           //<< "Klner/ka: " << order->printWaiterName() << endl;
    }

    return os;
}
