#include <stdio.h>
#include <math.h>

int main() {
   
    int a;
    int b,c;
    int d,e;
    int f;
    while(scanf("%d",&a)==1){
        b=a/10;
        c=a%10;
        d=c/5;
        e=c%5;
        f=e/1;
        printf("NT10=%d\n",b);
        printf("NT5=%d\n",d);
        printf("NT1=%d\n",f);
    }
    
    return 0;
}
