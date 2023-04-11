#include <iostream>
#include "OrderContainer.h"
#include "TakeAwayOrder.h"
#include "OnSiteOrder.h"

using namespace std;

void displayFoodMenu()
{
    cout << "Wbierz jedzenie?" << endl;
    cout << "Hamburger - 1" << endl;
    cout << "Cheeseburger - 2" << endl;
    cout << "Frytki - 3" << endl;
    cout << endl << endl;
}

void displayDrinkMenu()
{
    cout << "Wybierz napoj ?" << endl;
    cout << "Cola - 1" << endl;
    cout << "Fanta - 2" << endl;
    cout << "Sprite - 3" << endl;
    cout << endl << endl;
}

void displayAppMenu()
{
    cout << " Witaj w aplikacji zamowien" << endl;
    cout << "----------------------------" << endl;
    cout << "Wprowadz zamowienie - 1" << endl;
    cout << "Usun zamowienie - 2" << endl;
    cout << "Wyswietl zamowienia - 3" << endl;
    cout << "Zamknij aplikacje - 4" << endl;
}

int main()
{
    int menuChoice = 0;
    int currentOrderID = 1;

    OrderContainer orderContainer;

    while (true)
    {
        system("cls");
        displayAppMenu();
        cin >> menuChoice;

        if (menuChoice == 1)
        {
            system("cls");
            cout << "Na miejscu - 1" << endl;
            cout << "Na wynos - 2" << endl;

            int orderType;
            int foodChoice;
            int drinkChoice;
            int waiterID;

            cin >> orderType;
            if (orderType == 1)
            {
                system("cls");
                displayFoodMenu();
                cin >> foodChoice;

                system("cls");
                displayDrinkMenu();
                cin >> drinkChoice;

                system("cls");
                cout << "Podaj swoje ID: " << endl;
                cin >> waiterID;

                BaseOrder* order = new OnSiteOrder(currentOrderID, foodChoice, drinkChoice, orderType, waiterID);

                orderContainer.addOrder(order);
                order->calculateOrderPrice();
            }
            else if (orderType == 2)
            {
                system("cls");
                displayFoodMenu();
                cin >> foodChoice;

                system("cls");
                displayDrinkMenu();
                cin >> drinkChoice;

                system("cls");
                cout << "Podaj swoje ID: " << endl;
                cin >> waiterID;

                BaseOrder* order = new TakeAwayOrder(currentOrderID, foodChoice, drinkChoice, orderType, waiterID);

                order->calculateOrderPrice();
                orderContainer.addOrder(order);
            }
            currentOrderID++;
        }

        if (menuChoice == 2)
        {
            system("cls");

            if (orderContainer.getOrders().empty())
                cout << "Brak zamowien - brak mozliwosci usuniecia zamowienia" << endl;
            else
            {
                cout << "Podaj ID zamowienia, ktore ma zostac usuniete: " << endl;
                int orderIDremove;
                cin >> orderIDremove;
                orderContainer.removeOrder(orderIDremove);
            }

            system("pause");
        }

        if (menuChoice == 3)
        {
            system("cls");

            if (orderContainer.getOrders().empty())
                cout << "Brak zamowien" << endl;
            else
                cout << orderContainer;

//            for (size_t i = 0; i < orderContainer.getOrders().size(); i++)
//            {
//                orderContainer.getOrders()[i]->printWaiterName();
//            }

            system("pause");
        }

        if (menuChoice == 4)
        {
            system("cls");
            break;
        }
    }

    return 0;
}
