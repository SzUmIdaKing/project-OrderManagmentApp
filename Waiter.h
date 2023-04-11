#ifndef WAITER_H_
#define WAITER_H_

#include <iostream>

class Waiter
{
public:

    int waiterID_m;

	Waiter();
	~Waiter();

    void setWaiterID(int waiterID);
    void printWaiterName();
};
#endif // WAITER_H_
