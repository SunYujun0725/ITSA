
#include <stdio.h>
#include <math.h>

int main() {
    
    int a[6];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    int ans=0;
    for(int i=0;i<6;i++){
        ans+=a[i]*a[i]*a[i];
    }
    printf("%d\n",ans);
    return 0;
}
