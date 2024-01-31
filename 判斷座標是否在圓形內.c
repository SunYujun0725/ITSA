#include <stdio.h>
#include <math.h>

int dis(int x,int y){
    
    return (x-0)*(x-0)+(y-0)*(y-0);
}

int main() {
   
    int x,y;
    while(scanf("%d",&x)==1&&scanf("%d",&y)){
        if(dis(x,y)>10000){
            printf("outside\n");
        }
        else{
            printf("inside\n");
        }
    }
    
    return 0;
}
