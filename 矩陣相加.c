#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int matrix1[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    int c,d;
    scanf("%d %d",&c,&d);
    int matrix2[c][d];
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    int mixmatrix[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            mixmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(j!=b-1){
                printf("%d ",mixmatrix[i][j]);
            }
            else{
                printf("%d",mixmatrix[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
