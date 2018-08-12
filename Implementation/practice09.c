#include<stdio.h>

int main(){
    float a[100];
    int i,count = 0,count1 = 0, count2 = 0;
    float n;
    scanf("%f",&n);

    for(i = 0;i<n;i++){
        scanf("%f",&a[i]);
    }

    for(i = 0;i<n;i++){

        if(a[i]>0){

           count++;
        }
        if(a[i] < 0){
            count1++;
        }
        if(a[i]==0){
            count2++;
        }
    }

    printf("%f\n", count/n);
    printf("%f\n", count1/n);
    printf("%f\n",count2/n);

    return 0;

}