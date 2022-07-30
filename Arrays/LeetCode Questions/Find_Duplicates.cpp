#include<iostream>
using namespace std;
// Code Studio (https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397)
int findDuplicate(int arr[],int size) {
    int ans = 0;
	
    // XORing all array elements
	for(int i=0;i<size;i++){
		ans = ans^arr[i];
	}
    // XORing elements from [1 to N-1]
	for(int i=1;i<size;i++){
		ans = ans^i;
	}
	return ans;
}

int main(){

    int arr[6] = {5,1,2,3,4,2};

    cout << "The duplicate number is-> " << findDuplicate(arr,6) << endl;

    return 0;
}