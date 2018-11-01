#include<iostream>

using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    int res=0;
    while(l<=r){

        for(int i=l;i<=r-1;i++){
          int val = (i ^ (i+1));

            if(res < val)
                res = val;
        }

        l = l+1;
    }

    cout<<res<<endl;

    return 0;
}