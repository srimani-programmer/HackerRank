#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int size;
    vector<int> v;
    cin>>size;

    for(int i=0;i<size;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    for(int i=v.size()-1;i>0;i--){
            int val;
            if(v[i-1] > v[i]){
                val = v[i];
                v[i] = v[i-1];
                for(int k=0;k<v.size();k++)
                    cout<<v[k]<<" ";
            }else
                continue;
            cout<<endl;
            v[i-1] = val;
    }
        sort(v.begin(),v.end());

        for(int i=0;i<size;i++)
            cout<<v[i]<<" ";
        
        cout<<endl;

    return 0;
}