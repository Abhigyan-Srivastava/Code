#include<iostream>
using namespace std;

void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
}

void printEvenCounting(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout << i << " ";
        }
    }
}

int main(){

    int num;
    cin >> num;

    // Overall Counting
    printCounting(num);

    cout << endl;

    // Even Counting
    printEvenCounting(num);

    return 0;
}