#include <bits/stdc++.h> 
using namespace std; 
int main() { 
int n; 
cin >> n; 
vector<int> a(n); 
for (int &i : a) cin >> i; 
int x; 
cin >> x; 
} 
int inicio = 0, fim = n - 1; 
while (inicio <= fim) { 
int meio = inicio + (fim - inicio) / 2; 
if (a[meio] == x) { 
cout << meio << "\n"; 
return 0; 
} 
if (a[meio] < x) 
inicio = meio + 1;   // correção: descarta o meio 
else 
fim = meio - 1; 
} 
cout << -1 << "\n"; 
return 0;