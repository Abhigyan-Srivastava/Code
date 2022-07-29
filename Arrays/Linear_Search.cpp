#include<iostream>
using namespace std;

bool search(int arr[] , int size , int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
            cout << "Element found at position-> " << i << endl;
        }
    }
    return 0;
}

// int position(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             cout << "Element found at position-> " << i << endl;
//             break;
//         }
//     }
// }

int main(){

    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    
    cout << "Enter the key-> ";
    int key;
    cin >> key;

    cout << endl;

    // Whether 1 is present or not?
    bool found = search(arr,10,key);

    if(found){
        cout << "Key is present." << endl;
    }
    else{
        cout << "Key is not present." << endl;
    }

    // position(arr,10,1);

    return 0;
}