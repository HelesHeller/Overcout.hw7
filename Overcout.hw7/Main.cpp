#include <iostream>
#include<windows.h>
#include "overcoat.h"

using namespace std;


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Overcoat coat1("Winter", 150.0);
    Overcoat coat2("Spring", 120.0);
    Overcoat coat3("Winter", 200.0);

    if (coat1 == coat2) {
        cout << "Coat 1 and Coat 2 have the same type." << endl;
    }
    else {
        cout << "Coat 1 and Coat 2 have different types." << endl;
    }

    coat1 = coat3;
    cout << "Coat 1 type: " << coat1.getType() << ", price: " << coat1.getPrice() << endl;

    if (coat3 > coat2) {
        cout << "Coat 3 is more expensive than Coat 2." << endl;
    }
    else {
        cout << "Coat 3 is not more expensive than Coat 2." << endl;
    }

    return 0;
}
