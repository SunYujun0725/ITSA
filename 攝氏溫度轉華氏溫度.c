#include <stdio.h>
#include <math.h>
int main() {
   
    double a;
    double nine=9;
    double five=5;
    double c=nine/five;
    while(scanf("%lf",&a)==1){
        double b;
        b=a*c+32;
        printf("%.1lf\n",b);
    }
    
    return 0;
}
