#include<iostream>

using namespace std;

int main(){
    int year;
    cin>>year;
    int leapyearDays = 244,normalyearDays = 243;
    int days = 0;
    if(year % 400 == 0 || (year % 4 == 0 || year%100 != 0))
        days = 256 - leapyearDays;
    else
        days = 256 - normalyearDays;
    if(year == 1918)
        cout<<"26.09.1918"<<endl;
    else
    cout<<days<<"."<<"09"<<"."<<year<<endl;

    return 0;
}