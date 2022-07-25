#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int space=n-row;

        while(space){
            cout << " " << " ";
            space--;
        }
        int col=1;
        int value=row;
        while(col<=row){
            cout << value << " ";
            col++;
        }
        value++;
        cout << endl;
        row++;
    }

    return 0;
}
/*
      1 
    2 2 
  3 3 3 
4 4 4 4 
*/