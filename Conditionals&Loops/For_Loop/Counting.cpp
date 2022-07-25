#include<iostream>
using namespace std;

int main(){
    
    // int n;
    // cin>>n;

    // int i=1;

    // for(int i=1; ; i++){
    //     cout << i << " ";
    // }

    // for(;;){
    //     if(i<=n){
    //         cout << i << " ";
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    //Implementation of Multiple Variable 
    for(int a=0, b=1; a>=0 && b>=1; a--,b--){
        cout << "The value of a is-> " << a << endl << "The value of b is-> " << b << endl;
    }
    return 0;
}