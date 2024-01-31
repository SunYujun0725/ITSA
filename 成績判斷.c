
#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    while(scanf("%d",&a)==1){
        if(a>=90&&a<=100){
            printf("A\n");
        }
        else if(a>=80&&a<90){
            printf("B\n");
        }
        else if(a>=70&&a<80){
            printf("C\n");
        }
        else if(a>=60&&a<70){
            printf("D\n");
        }
        else if(a>=0&&a<60){
            printf("E\n");
        }
        else{
            printf("error\n");
        }
        
    }
    return 0;
}
