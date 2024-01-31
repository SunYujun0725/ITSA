#include <stdio.h>
#include <math.h>

int main() {
    
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    
    
    return 0;
}
