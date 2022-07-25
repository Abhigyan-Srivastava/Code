// Implementing Continue Statement (Skipping a particular Iteration)
#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){
        cout << "HI" << endl;
        cout << "Hey!" << endl;
        continue;

        cout << "Reply" << endl;
    }

    return 0;
}