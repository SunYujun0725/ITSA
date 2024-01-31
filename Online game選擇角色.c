
#include <stdio.h>
#include <math.h>

int main() {
   
    int a;
  
    while(scanf("%d",&a)==1){
        if(a==1){
            printf("Person\n");
        }
        else if(a==2){
            printf("Fairy\n");
        }
        else if(a==3){
            printf("Dwarf\n");
        }
    }
    
    return 0;
}
