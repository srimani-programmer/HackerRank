#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int a[5];

    for(int i = 0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    long long int b[5];
    for(int i=0;i<5;i++){
        b[i] = a[5-i-1] + a[4-i-1] + a[5-i+3] + a[5-i+4];
    }

    b[0] = a[1] + a[2] + a[3] + a[4];
    
    b[1]  = a[0] + a[2] + a[3] + a[4];
    
    b[2] = a[1] + a[0] + a[3] + a[4];

    b[3]= a[1] + a[2] + a[0] + a[4];

    b[4]= a[1] + a[2] + a[3] + a[0];

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(b[i]<b[j]){
                int temp;
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("%lld %lld",b[0],b[4]);
    return 0;
}