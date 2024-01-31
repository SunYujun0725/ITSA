
#include <stdio.h>
#include <math.h>

int main() {
   
    int a;
    scanf("%d",&a);
    int ans=0;
    for(int i=1;i<=a;i++){
        ans+=i;
    }
    for(int i=1;i<=a;i++){
        printf("%d ",i);
        if(i==a){
            printf("= ");
            printf("%d\n",ans);
        }
        else{
            printf("+ ");
        }
    }
    
    return 0;
}
