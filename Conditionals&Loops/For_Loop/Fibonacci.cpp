#include<iostream>
using namespace std;

int main(){

    // Implementing Fibonacci Series using for-loop
    int n;
    cin>>n;

    // (Starting Element)
    int a=0; 
    // (Element next to Starting Element)
    int b=1;

    cout << a << " " << b << " ";

    for(int i=1;i<=n;i++){
        int nextNum = a+b;
        cout << nextNum << " ";

        a=b;
        b=nextNum;
    }

    return 0;
}