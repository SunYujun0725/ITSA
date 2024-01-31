#include<stdio.h>

int main(){
    long long a;
   
    while(scanf("%lld",&a)==1){
        long long ans=1;
        for(int i=1;i<=a;i++){
            ans=ans*i;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
