#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    // To find the difference between sum and product of the entered digit(1281)
    int prod=1;
    int sum=0;

    while(n!=0){
        // Important step
        int digit=n%10;
        prod*=digit;
        sum+=digit;

        // Important Step
        n/=10;
    }

    int answer=prod-sum;

    cout << answer << endl;

    return 0;
}