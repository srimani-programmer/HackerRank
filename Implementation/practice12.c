#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[7],b[7];

    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<7;i++){
        scanf("%d",&b[i]);
    }

    int day0 = a[0] - b[0];

    int day1 = a[1] - b[1];

    int day2 = a[2] - b[2];

    int day3 = a[3] - b[3];

    int day4 = a[4] - b[4];

    int day5 = a[5] - b[5];

    int day6 = a[6] - b[6];

   int temperature = abs(day0) + abs(day1) + abs(day2) + abs(day3) + abs(day4) + abs(day5) + abs(day6);

   printf("%d\n",temperature);

    return 0;
}