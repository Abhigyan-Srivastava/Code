#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    bool isAnswer = true;

    if(n==0){
        isAnswer = false;
    }

    while(n!=0){
        if(n%2!=0){
            bool isAnswer = false;
        }
        n/=2;
    }
    
    cout << isAnswer << endl;

    return 0;
}