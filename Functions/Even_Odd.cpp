#include<iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        // Odd
        return 0;
    }
    // Even
    return 1;
}

int main(){

    int num;
    cin >> num;

    if(isEven(num)){
        cout << "Number is Even." << endl;
    }
    else{
        cout << "Number is Odd." << endl;
    }
    return 0;
}