
#include <stdio.h>

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int matrix[N][M];
    if(N==0||M==0){
        return 0;
    }

    
   for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int matrix2[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            matrix2[i][j]=matrix[j][i];
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(j!=N-1){
                printf("%d ",matrix2[i][j]);
            }
            else{
                printf("%d",matrix2[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
