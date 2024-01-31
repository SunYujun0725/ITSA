#include <stdio.h>
#include <math.h>

int main() {
   
    int a,b;
    double c=0.7;
    double d=0.6;
    double ans;
    while(scanf("%d",&a)==1&&scanf("%d",&b)==1){
        if(b==1){
            ans=(a-80)*c;
            printf("%.1lf\n",ans);
        }
        else{
            ans=(a-70)*d;
            printf("%.1lf\n",ans);
        }
    }
    
    return 0;
}
