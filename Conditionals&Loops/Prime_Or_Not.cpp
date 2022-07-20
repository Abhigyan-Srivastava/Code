#include<iostream>
using namespace std;

int main(){

    int num;
    cin >> num;

    int i=2;
    
    while(i<num){
        if(num%i==0){
            cout << "Not Prime";
        }
        else{
            cout << "Is Prime";
        }
        i++;
    }
     
    return 0;
}