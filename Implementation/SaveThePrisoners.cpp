#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin>>testcases;

    while(testcases--){
        int prisoners,sweets,chairarrangement;
        cin>>prisoners>>sweets>>chairarrangement;

        int res = sweets + chairarrangement - 1;

        int awful = res % prisoners;

        if(awful == 0)
            cout<<prisoners<<endl;
        else   
            cout<<awful<<endl;
    }

    return 0;
}