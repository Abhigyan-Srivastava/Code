#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    
    // start and end will denote the index of array
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    // Even Array
    int arr[6] = {1,4,0,5,-2,15};
    // Odd Array
    int brr[5] = {2,6,3,9,4};

    reverse(arr,6);

    reverse(brr,5);

    printArray(arr,6);

    printArray(brr,6);

    return 0;
}