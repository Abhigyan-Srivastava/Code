#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    // Loop for Row
    while(i<=n){
        int j=1;
        // Loop for Coloumn
        while(j<=n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

// Same Rows and Coloumns
/*  ****
    ****
    ****
    ****  */