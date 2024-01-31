#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    double d=2;
    while(scanf("%d",&a)==1&&scanf("%d",&b)==1&&scanf("%d",&c)==1){
        double ans=0;
        ans=(a+b)*c/d;
        printf("Trapezoid area:%.1lf\n",ans);
    }
    
    return 0;
}
