#include <stdio.h>
#include <math.h>
int main() {
   
    int a,b;
    int c;
    int d;
    while(scanf("%d",&a)==1&&scanf("%d",&b)==1){
        c=a+b;
        d=pow(c,2);
        printf("%d\n",d);
    }
    
    return 0;
}
