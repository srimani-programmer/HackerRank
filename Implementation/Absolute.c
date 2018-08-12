// this program deals with Absolute values
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){

    int Int = abs(10);
    double Double = fabs(12.4);
    long long int Long = labs(-134235345);

    printf("%d\n",Int);
    printf("%lf\n",Double);
    printf("%lld",Long);

    return 0;
}
