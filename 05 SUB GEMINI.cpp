#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    // Otimização de I/O padrão 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    string s; 
    cin >> s; 
     
    bool ok = true; 
    int n = s.size(); 
     
    for (int i = 0; i < n / 2; i++) { 
        // Correção: o índice espelhado do final é n - 1 - i 
        if (s[i] != s[n - 1 - i]) { 
            ok = false; 
            break; // Opcional: para a busca mais cedo se já encontrou diferença 
        } 
    } 
     
    cout << (ok ? "SIM" : "NAO") << "\n"; 
     
    return 0;