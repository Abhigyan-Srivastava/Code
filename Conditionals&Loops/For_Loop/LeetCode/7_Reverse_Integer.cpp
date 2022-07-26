// Input c=123 Output=321
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    int answer=0;
    int i=0;

    while(n!=0){
        int digit = n%10;
        if( (answer > INT_MAX/10) || (answer < INT_MIN/10)){
                return 0;
            }
        answer = (answer * 10) + digit;
        // answer = (answer * pow(10,i) ) + digit;
        // answer = (digit * pow(10,i) ) + answer;
        n = n/10;
        i++;
    }

    cout << answer << endl;

   return 0;
}