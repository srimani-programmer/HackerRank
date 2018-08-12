#include<iostream>

using namespace std;

int angryProfessor(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int stdcount = 0;

    for(int i=0;i<n;i++){
        if(a[i] <= 0)
            stdcount++;
    }

    if(stdcount >= k)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}

int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        angryProfessor();
    }
}