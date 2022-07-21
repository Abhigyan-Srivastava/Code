#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    char value='A';

    while(row<=n){
        int col=1;
        while(col<=n){
            cout << value << " ";
            value = value + 1;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}

/*
A B C 
D E F
G H I
*/