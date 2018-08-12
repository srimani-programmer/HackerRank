#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[100][100],m;
    int mainDiagonal = 0, offDiagonal =0;
    scanf("%d",&m);

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0;i<m;i++){

        mainDiagonal = mainDiagonal + a[i][i];
        offDiagonal = offDiagonal + a[i][m - i -1];
    }
    int difference = abs(mainDiagonal - offDiagonal);

    printf("%d\n",difference)
    return 0;
}