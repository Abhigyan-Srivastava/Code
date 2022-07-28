#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout << endl << "Printing the array" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    // Decleration of array
    // int number[15];

    // Accessing the array
    // Some random value will be printed
    // cout << "Value at 0 index-> " << number[0] << endl;

    // Limit Boundation
    // cout << "Value at 20 index-> " << number[20] << endl;

    // Decleration of another array
    // int second[3] = {5,7,11};

    // cout << "Value at second index is-> " << second[2] << endl;

    // Decleration of Third Array
    // int third[15] = {2,7};

    // int n=15;

    // cout << "Printing the array" << endl;
    // for(int i=0;i<n;i++){
    //     cout << third[i] << " ";
    // }
    // cout << endl;
    
    // Decleration of Fourth Array
    // int fourth[10] = {0};
    // Initialising all locations with 0
    // for(int i=0;i<10;i++){
    //     cout << fourth[i] << " ";
    // }

    // Printing the Third Array
    // printArray(third,n);

    // int fourthSize = sizeof(fourth)/sizeof(int);

    // cout << "The size of fourth array is-> " << fourthSize << endl;

    char ch[5] = {'a','b','c','r','p'};
    cout << ch[3] << endl;
    

    return 0;
}