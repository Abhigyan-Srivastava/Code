#include<iostream>
using namespace std;
// Code Studio (https://www.codingninjas.com/codestudio/problems/find-unique_625159)
int findUnique(int *arr, int size)
{
    int ans=0;
    
    for(int i=0;i<size;i++){
        // XOR Operator
        ans = ans^arr[i];
    }
    return ans;
}

int main(){

    int arr[7] = {2,3,1,6,3,6,2};

    cout << findUnique(arr,7) << endl;

    return 0;
}