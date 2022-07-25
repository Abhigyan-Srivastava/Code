#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;

    while(row<=n){

        // Print space

        int space = n-row;
        while(space){
            cout << " " << " ";
            space--;
        }

        // Print First Triangle

        int col = 1;
        while(col<=row){
            cout << col << " ";
            col++;
        }

        // Print Second Triangle

        int start = row-1;
        while(start){
            cout << start << " ";
            start--;
        }

        cout << endl;
        row++;
    }

    return 0;
}
/*
      1     
    1 2 1   
  1 2 3 2 1 
1 2 3 4 3 2 1
*/