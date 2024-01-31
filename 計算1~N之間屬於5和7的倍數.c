#include <stdio.h>
#include <math.h>

int main() {
   
    int a;
    int count=0;
    while(scanf("%d",&a)==1){
        count=0;
        for(int i=1;i<=a;i++){
            if(i%5==0&&i%7==0){
                if(count==0){
                    
                }
                else{
                    printf(" ");
                }
                printf("%d",i);
                count++;
            }
        }
        printf("\n");
    }
    
    return 0;
}
