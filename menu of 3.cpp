#include <iostream>
#include <string>

using namespace std;

int main()
{
    int menu, pay, change, price;
    string drink;

    cout << "Select your order" << endl << endl;

    cout << "[A] Coke (50)" << endl;
    cout << "[B] Pepsi (40)" << endl;
    cout << "[C] Royal (30)" << endl << endl;

    cout << "Menu: ";
    cin >> menu;


    switch(menu)
    {
        case 1:
            price = 50;
            drink = "Coke";
        break;

        case 2:
            price = 40;
            drink = "Pepsi";
        break;

        case 3:
            price = 30;
            drink = "Royal";
        break;

        default:
            cout << "Invalid input";
            return 0;
    }

    cout << "Your Payment: ";
    cin >> pay;

    if(pay > price)
    {
        change = pay - price;
        cout << "You have purchased " << drink << endl;
        cout << "Change: " << change;
    }
    else if(pay == price)
    {
        cout << "You have purchased " << drink << endl;
        cout << "No Change";
    }
    else
    {
        cout << "insufficient funds";
    }

    return 0;
}
