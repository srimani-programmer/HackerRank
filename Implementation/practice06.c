/*A very big sum*/

#include<stdio.h>

int main(){
    int n;

    long long int a[100];

    scanf("%d",&n);
   long long int tot = 0;
    int i;

    for(int i = 0 ; i < n ; i++){

        scanf("%lld",&a[i]);
    }

    for(i = 0;i<n;i++){

        tot = tot + a[i];
    }

    printf("%lld\n",tot);
}