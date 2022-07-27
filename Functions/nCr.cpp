#include<iostream>
using namespace std;

// Function for finding Factorial of a number
int fact(int x){
    int ans=1;

    for(int i=1;i<=x;i++){
        ans = ans * i;
    }
    return ans;
}

// Function for finding nCr
int nCr(int n , int r){

    // Numerator
    int numerator = fact(n);

    // Denominator
    int denominator = fact(r) * fact(n-r);

    // Answer
    int ans = numerator/denominator;

    return ans;
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int r;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "The value of nCr is-> " << nCr(n,r) << endl;

    return 0;
}