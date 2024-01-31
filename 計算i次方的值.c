#include <stdio.h>
#include <math.h>

int main() {
   
    int a;
    int ans;
    while(scanf("%d",&a)==1){
        if(a<=31){
            ans=1;
            for(int i=0;i<a;i++){
                ans=ans*2;
            
            }
            printf("%d\n",ans);
        }
        else{
            printf("Value of more than 31\n");
        }
    }
    
    return 0;
}
