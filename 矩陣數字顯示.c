//
//  main.cpp
//  6.
//
//  Created by 孫渝鈞 on 2020/11/25.
//  Copyright © 2020 孫渝鈞. All rights reserved.
//

#include<iostream>

#include<string>
using namespace std;
int main(){
    string s1[10]={"*****","    *","*****","*****","*   *","*****","*****","*****","*****","*****"};
    string s2[10]={"*   *","    *","    *","    *","*   *","*    ","*    ","    *","*   *","*   *"};
    //string s3[10]={"*   *","   *","   *","   *","*  *","*   ","*   ","*  *","*  *","*  *"};
    string s4[10]={"*   *","    *","*****","*****","*****","*****","*****","    *","*****","*****"};
    string s5[10]={"*   *","    *","*    ","    *","    *","    *","*   *","    *","*   *","    *"};
    //string s6[10]={"*   *","   *","*   ","   *","   *","   *","*  *","   *","*  *","   *"};
    string s7[10]={"*****","    *","*****","*****","    *","*****","*****","    *","*****","*****"};
    string s;
    
    while(cin>>s){
        
        for(int i=0;i<s.length();i++){
            int a=s[i]-'0';
            
            if(i==s.length()-1){
                cout<<s1[a]<<endl;
            }
            else {
                cout<<s1[a]<<" ";
            }
        }
        
        for(int i=0;i<s.length();i++){
            int a=s[i]-'0';
            if(i==s.length()-1) cout<<s2[a]<<endl;
            else cout<<s2[a]<<" ";
        }
        /*for(int i=0;i<s.length();i++){
            int a=s[i]-'0';
            if(i==s.length()-1) cout<<s3[a]<<endl;
            else cout<<s3[a]<<" ";
        }*/
        for(int i=0;i<s.length();i++){
            int a=s[i]-'0';
            if(i==s.length()-1) cout<<s4[a]<<endl;
            else cout<<s4[a]<<" ";
        }
        for(int i=0;i<s.length();i++){
            int a=s[i]-'0';
            if(i==s.length()-1) cout<<s5[a]<<endl;
            else cout<<s5[a]<<" ";
        }
        /*for(int i=0;i<s.length();i++){
            int a=s[i]-'0';
            if(i==s.length()-1) cout<<s6[a]<<endl;
            else cout<<s6[a]<<" ";
        }*/
        for(int i=0;i<s.length();i++){
            int a=s[i]-'0';
            if(i==s.length()-1) cout<<s7[a]<<endl;
            else cout<<s7[a]<<" ";
        }
        
        
    }
    
    
    
    
}

