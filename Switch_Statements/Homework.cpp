// Number of Notes required using Switch Case
#include<iostream>
using namespace std;

int main(){

    int money;
    cout << "Enter the amount-> ";
    cin >> money;

    switch (1){

        case 1: cout << "Number of 100 Rupees notes required is-> " << money/100 << endl;
                money = money % 100;
                // break;

        case 2: cout << "Number of 50 Rupees notes required is-> " << money/50 << endl;
                money = money % 50;
                // break;

        case 3: cout << "Number of 20 Rupees notes required is-> " << money/20 << endl;
                money = money%20;
                // break;

        case 4: cout << "Number of 1 Rupee notes required is-> " << money << endl;
    }
    return 0;
}