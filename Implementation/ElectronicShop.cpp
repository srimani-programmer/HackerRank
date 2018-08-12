#include<iostream>

using namespace std;

int main(){
    int budget,keybooardItems,usbItems;
    cin>>budget>>keybooardItems>>usbItems;
    int keyb[keybooardItems],usbd[usbItems];

    for(int i=0;i<keybooardItems;i++)
        cin>>keyb[i];
    
    for(int i=0;i<usbItems;i++)
        cin>>usbd[i];

    int amount = 0;
    int newamount = 0;
    int itemcount = 0,count =0;

    for(int i=0;i<keybooardItems;i++){
        for(int j=0;j<usbItems;j++){
            amount = keyb[i] + usbd[j];
            if(amount <= budget && amount >= newamount){
                newamount = amount;
                count++;
            }        
        }
    }

    if(count == 0)
        cout<<-1<<endl;
    else    
        cout<<newamount<<endl;
        
    return 0;
}