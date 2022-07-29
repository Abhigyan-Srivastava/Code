// To find the nth term of AP. ( a + ( n - 1 ) * d )
#include<iostream>
using namespace std;

int n_term(int n,int a,int d){
    int ans = a + ( n - 1 ) * d;
    return ans;
}

int main(){

    cout <<"Enter the number of terms (n)-> ";
    int n;
    cin >> n;

    cout << "First Element (a)-> ";
    int a;
    cin >> a;

    cout << "Common Difference (d)-> ";
    int d;
    cin>>d;

    cout << "The nth term of AP is-> " << n_term(n,a,d) << endl;

    return 0;
}