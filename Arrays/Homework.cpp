#include<iostream>
using namespace std;

int main(){
    
    int size = 5;
    int arr[size];

    int val = 5;

    for(int i=0;i<size;i++){
        arr[i] = val;
    }

    cout << "The array is->";
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }

    return 0;
}