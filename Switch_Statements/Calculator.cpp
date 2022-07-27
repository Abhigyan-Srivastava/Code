// Program to create a Mini Calculator
#include<iostream>
using namespace std;

int main(){

    int a,b;
    
    cout << "Enter the first operand: ";
    cin >> a;

    cout << "Enter the second operand: ";
    cin >> b;

    char op;
    cout << " + , - , * , / , % " << endl;
    cout << "Select the operator: ";
    cin >> op;

    switch(op){

        case '+': cout << (a+b) << endl;
                  break;

        case '-': cout << (a-b) << endl;
                  break;

        case '*': cout << (a*b) << endl;
                  break;

        case '/': cout << (a/b) << endl;
                  break;

        case '%': cout << (a%b) << endl;
                  break;

        default : cout << "Please enter the valid operation" << endl;
    }
    return 0;
}