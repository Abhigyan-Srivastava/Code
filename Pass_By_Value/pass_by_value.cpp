#include<iostream>
using namespace std;

// Copy of value is created for the usage of function dummy
void dummy(int n){
    n++;
    cout << n << endl;
}

int main(){

    int n;
    cin >> n;

    dummy(n);

    cout << n << endl;

    return 0;
}