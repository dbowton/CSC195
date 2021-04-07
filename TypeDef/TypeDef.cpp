#include <iostream>
#include "Sandwich.h"

#define SHOP_NAME "Subway"
#define DEBUG

//typedef int currency;
using currency = int;
using namespace std;

int main(){
    Sandwich sandwich;
    sandwich.Read();
    sandwich.Write();

    cout << SHOP_NAME << endl;

#ifdef _DEBUG
    cout << "debug" << endl;
#endif


#ifdef DEBUG
    cout << "Test" << endl;
#endif // DEBUG

    //currency balance;
}
