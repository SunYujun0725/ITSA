#include <stdio.h>
#include <math.h>

int main() {
   
    double a;
    while(scanf("%lf",&a)==1){
        double ans;
        ans=a*a;
        double ans1;
        ans=(int)(ans*10+0.5);
        ans1=ans/10;
        printf("%.1lf\n",ans1);
    }
    
    
    return 0;
}
