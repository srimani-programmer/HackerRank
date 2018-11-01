#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int>v;
    for(int i=0;i<size;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }
  
    int res=0;

    for(int i=0;i<size;i++){
        if(count(v.begin(),v.end(),v[i]) > 1)
            continue;
        else
            res = v[i];
    }

    cout<<res<<endl;

    return 0;
}