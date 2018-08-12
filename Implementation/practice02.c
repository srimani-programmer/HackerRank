#include<stdio.h>

int array(){
    int n;
    int array[100];
    scanf("%d", &n);
    for(int i =0 ; i<n ;i++){
        scanf("%d",&array[i]);
    }
    int tot = 0;
    for(int i = 0 ;i<n ; i++){
        tot = tot + array[i];
    }

   return tot;

}
int main(){

    int totsum = array();

    printf("%d\n", totsum);

    return 0;  
}