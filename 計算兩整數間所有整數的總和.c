#include <stdio.h>
#include <math.h>

int main() {
   
    int a,b;

    while(scanf("%d",&a)==1&&scanf("%d",&b)==1){
        int ans=0;
        if(a>=b){
            for(int i=b;i<=a;i++){
                ans+=i;
            }
        }
        else{
            for(int i=a;i<=b;i++){
                ans+=i;
            }
        }
        printf("%d\n",ans);
    }
    
    return 0;
}
