#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long a=0, b=0, d=0;
            a=(n-1)%3;
            a=n-1-a;
            a=a/3;
            b=(n-1)%5;
            b=n-1-b;
            b=b/5;
            d=(n-1)%15;
            d=n-1-d;
            d=d/15;
            long sum = 3*a*(a+1)/2 + 5*b*(b+1)/2 - 15*d*(d+1)/2;
        
        cout << sum << endl;
    }

    return 0;
}