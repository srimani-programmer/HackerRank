#include<iostream>

using namespace std;

int main(){
    string s;
    int let[26];
    for(int i=0;i<26;i++)
        cin>>let[i];
    cin>>s;

    int val =0;

    for(char i : s){
        if(let[(int)i - 97] >val)
            val = let[(int)i - 97];            
    }

    cout<<val * s.size()<<endl;

    return 0;
}

