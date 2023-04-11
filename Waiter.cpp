#include "Waiter.h"

using namespace std;

Waiter::Waiter()
{
    waiterID_m = 0;
}

Waiter::~Waiter()
{
}

void Waiter::setWaiterID(int waiterID)
{
    waiterID_m = waiterID;
}

void Waiter::printWaiterName()
{
    if(waiterID_m == 0)
        cout << "Bledny ID" << endl;
    else if(waiterID_m == 1)
        cout << "Kelner/ka: Jan Kowalski" << endl;
    else if(waiterID_m == 2)
        cout << "Kelner/ka: Karol Czarnicki" << endl;
    else if(waiterID_m == 3)
        cout << "Kelner/ka: Aneta Kowalska" << endl;
}
