// Input n=5 Output=2
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int m=n;
        
        int mask=0;
        
//         Edge Case
        if(n==0){
            return 1;
        }
        
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n)&mask;

    cout << "The Complement is " << ans << endl;

    return 0;
}