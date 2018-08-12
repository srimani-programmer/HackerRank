#include<stdio.h>

int main(){
    int a[100],n;

    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        if(a[i]>=38){
        int remainder = a[i] % 5;
        int difference = 5 - remainder;
        if(difference < 3){
            int newScore = a[i] + difference;
            printf("%d\n",newScore);
        }else{
            printf("%d\n",a[i]);
        }
        }else{
            printf("%d\n",a[i]);
      }
    }
    return 0;
}