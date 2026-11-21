#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
string s; 
cin>>s; 
int bal=0; 
bool ok=true; 
for(char c:s){ 
if(c=='(')bal++;else if(c==')'){ 
bal--; 
if(bal<0){ 
} 
} 
} 
ok=false; 
break; 
cout<<(ok&&bal==0?"SIM":"NAO")<<"\n"; 
} 