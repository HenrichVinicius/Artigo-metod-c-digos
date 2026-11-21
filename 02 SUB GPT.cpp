#include <bits/stdc++.h>
using namespace std;
int main(){int 
n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;int 
maior=0;for(int x:a)maior=max(maior,x);cout<<maior<<"\n";}