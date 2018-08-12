#include<stdio.h>

int main(){
    int a[10],b[10];
    int n1,n2;
    scanf("%d",&n1);
    for(int i = 0 ; i< n1 ;i++){

        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(int i = 0 ;i< n2 ;i++){
        scanf("%d",&b[i]);
    }
    int  c[5] , i;

    for( i = 0 ; i < n1;i++){

        c[i] = a[i] + b[i];
        printf("%d\n",c[i]);
    }

    
}