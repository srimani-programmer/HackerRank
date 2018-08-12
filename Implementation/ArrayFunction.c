#include<stdio.h>

int display(marks){

    printf("The marks of student is %d\n",marks);

    return 0;
}

int main()
{
    int marks[5] = {10,20,30,40,50};

    for(int i=0 ;i<5 ;i++){
        display(marks[i]);
    }
    return 0;
}