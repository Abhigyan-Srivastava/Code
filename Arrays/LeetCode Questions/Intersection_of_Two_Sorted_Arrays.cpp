#include<iostream>
using namespace std;

int findArrayIntersection(int arr1[], int n, int arr2[], int m)
{
	int ans;
	int i=0, j=0;
	while(i<n && j<m){
		if(arr1[i] == arr2[j]){
			ans = arr1[i];
			i++;
			j++;
		}
		else if(arr1[i] < arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}

int main(){

    int arr1[3] = {1,2,3};
    int arr2[2] = {3,4};

    cout << "The intersection of two sorted array is-> " << findArrayIntersection(arr1,3,arr2,2) << endl;

    return 0;
}