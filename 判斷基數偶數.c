#include <stdio.h>
#include <math.h>

int main() {
   
    int a;
  
    while(scanf("%d",&a)==1){
        if(a%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    
    return 0;
}
