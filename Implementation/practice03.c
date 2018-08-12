#include<stdio.h>

int maxArray(){

    int n1,n2,n;
    int a[100],b[100];

    scanf("%d",&n1);
    for(int i = 0; i< n1 ;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&n2);
    for(int i = 0;i < n2;i++){
        scanf("%d",&b[i]);
    }
   
 return 0;
}
int main(){

    int max = maxArray();

    printf("%d",max);

    return 0;
}