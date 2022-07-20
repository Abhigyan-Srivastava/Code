#include<iostream>
using namespace std;

int main(){

    // int a,b;
    // cout << "Enter the values of A and B: ";
    // cin >> a >> b;

    // if(a>b){
    //     cout << "A is greater.";
    // }
    // else{
    //     cout << "B is greater.";
    // }

// We can also use if else if for the below mentioned code
    int num;
    cin >> num;

    if(num==0){
        cout << "You entered 0";
    }
    else{
        if(num>0){
            cout << "Positive";
        }
        else{
            cout << "Negative";
        }
    }

    return 0;
}
