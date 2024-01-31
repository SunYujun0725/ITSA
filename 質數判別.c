#include <stdio.h>

int main() {
   
    int a;
    int check=0;
    while(scanf("%d",&a)==1){
      
        for(int i=2;i<a;i++){
            if(a%i==0){
                printf("NO\n");
                check=1;
                break;
            }
        }
        if(check==0){
            printf("YES\n");
        }
        
    };
    
    return 0;
}
