#include <stdio.h>
#include <math.h>

int main() {
   
    int a,b,c;
  
    while(scanf("%d",&a)==1&&scanf("%d",&b)==1&&scanf("%d",&c)==1){
        if(a>b&&b>c){
            printf("%d>%d>%d\n",a,b,c);
        }
        else if(b>a&&a>c){
            printf("%d>%d>%d\n",b,a,c);
        }
        else if(c>a&&a>b){
            printf("%d>%d>%d\n",c,a,b);
        }
        else if(a>c&&c>b){
            printf("%d>%d>%d\n",a,c,b);
        }
        else if(b>c&&c>a){
            printf("%d>%d>%d\n",b,c,a);
        }
        else if(c>b&&b>a){
            printf("%d>%d>%d\n",c,b,a);
        }
    }
    
    return 0;
}
