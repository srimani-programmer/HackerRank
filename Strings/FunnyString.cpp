#include<iostream>
#include<algorithm>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
            string s1,s2;
    cin >>s1;

    s2 = s1;

    vector<int>v1,v2;

    reverse(s2.begin(),s2.end());

    for(int i=0;i<s1.size();i++){
        int val1 = s1.at(i);
        int val2 = s2.at(i);
        v1.push_back(val1);
        v2.push_back(val2);
    }

    vector<int>v3,v4;

    for(int i=0;i<v1.size()-1;i++){
        v3.push_back(abs(v1[i] - v1[i+1]));
        v4.push_back(abs(v2[i] - v2[i+1]));
    }

    int count=0;

    for(int i=0;i<v3.size();i++){
        if(v3[i] == v4[i])
            continue;
        else{
            count++;
            break;
        }
    }

    if(count == 0)
        cout<<"Funny"<<endl;
    else
        cout<<"Not Funny"<<endl;
    }

    return 0;

}
