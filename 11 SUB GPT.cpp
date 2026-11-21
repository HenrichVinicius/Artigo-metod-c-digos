#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
 int n,m; 
 cin>>n>>m; 
 vector<int>a(n),b(m),c; 
 for(int&x:a) 
  cin>>x; 
 for(int&x:b) 
  cin>>x; 
  
 int i=0,j=0; 
 
 while(i<n&&j<m){ 
  if(a[i]>b[j]) 
   c.push_back(a[i++]); 
  else  
   c.push_back(b[j++]); 
 } 
 while(i<n) 
  c.push_back(a[i++]); 
 while(j<m) 
  c.push_back(b[j++]); 
 for(int k=0;k<(int)c.size();k++) 
  cout<<(k?" ":"")<<c[k]; 
 cout<<"\n"; 
}