
#include <stdio.h>
#include <math.h>

int main() {
    
    char c[5][2];
    int ans=0;
    for(int i=0;i<5;i++){
        scanf("%s",c[i]);
        if(c[i][0]=='A'){
            ans+=14;
        }
        else if(c[i][0]=='J'){
            ans+=11;
        }
        else if(c[i][0]=='Q'){
            ans+=12;
        }
        else if(c[i][0]=='K'){
            ans+=13;
        }
        else if(c[i][0]=='2'){
            ans+=2;
        }
        else if(c[i][0]=='3'){
            ans+=3;
        }
        else if(c[i][0]=='4'){
            ans+=4;
        }
        else if(c[i][0]=='5'){
            ans+=5;
        }
        else if(c[i][0]=='6'){
            ans+=6;
        }
        else if(c[i][0]=='7'){
            ans+=7;
        }
        else if(c[i][0]=='8'){
            ans+=8;
        }
        else if(c[i][0]=='9'){
            ans+=9;
        }
        else if(c[i][0]=='1'&&c[i][1]=='0'){
            ans+=10;
        }
        
        //printf("%d\n",ans);
    }
    printf("%d\n",ans);
    return 0;
}
