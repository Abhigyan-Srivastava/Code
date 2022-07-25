#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int space=row-1;
        while(space){
            cout << " " <<" ";
            space++;
        }
        int col=1;
        while(col<=row){
            int start=1+col-row;
            while(start){
                cout << col << " ";
                col++;
            }
        }
        cout << endl;
        row++;
    }
    
    return 0;
}