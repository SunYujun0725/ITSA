#include <stdio.h>

int main()
{
    int m[1000000];
    int i=0;
    int count=0;
    while((scanf("%d",&m[i])==1)){
        i++;
        count++;
    }
    for(int i=count-1;i>=0;i--){
        if(i!=0){
            printf("%d ",m[i]);
        }
        else{
            printf("%d",m[i]);
        }
    }
    printf("\n");
    return 0;
}
