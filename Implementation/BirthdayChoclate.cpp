#include<iostream>

using namespace std;

int main(){
    int size;
    cin>>size;
    int a[size],m,d;
    for(int i=0;i<size;i++)
        cin>>a[i];
    cin>>d>>m;
    int count = 0;
    for(int i=0;i<size;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
        sum = sum + a[i + j]; 
        }
        if(sum == d)
            count++;
    }
cout<<count<<endl;;
    return 0;
}