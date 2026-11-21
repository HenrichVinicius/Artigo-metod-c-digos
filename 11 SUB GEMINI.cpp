#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int n;     
    cin >> n; 
    vector<long long> a(n), p(n); 
    for(auto& x : a) { 
        cin >> x; 
    } 
    // A primeira soma prefixada deve incluir a[0] 
    p[0] = a[0]; 
    for(int i = 1; i < n; i++) { 
        p[i] = p[i - 1] + a[i]; 
    } 
    // Impressão dos n elementos separados por espaço 
    for(int i = 0; i < n; i++) { 
        cout << (i ? " " : "") << p[i]; 
    } 
    cout << "\n"; 
    return 0; 
} 
