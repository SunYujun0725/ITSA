
#include <stdio.h>
#include <math.h>

int main() {
    
    int a,b,c,d,e;
    while(scanf("%d",&a)==1&&scanf("%d",&b)==1&&scanf("%d",&c)==1&&scanf("%d",&d)==1&&scanf("%d",&e)==1){
        int ans;
        ans=a*1+b*2+c*2+d*2-e*2;
        if(ans>=45){
            printf("A\n");
        }
        else if(ans>=35&&ans<45){
            printf("B\n");
        }
        else if(ans>=25&&ans<=34){
            printf("C\n");
        }
        else if(ans<25){
            printf("D\n");
        }
    }
    
    
    return 0;
}
