#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (int &x : a) cin >> x; 
 
    int alvo; 
    cin >> alvo; 
 
    int pos = -1; 
    for (int i = 0; i < n; i++) { 
        if (a[i] == alvo) { 
            pos = i; 
            break;  // para na primeira ocorrência 
        } 
    } 
 
    cout << pos << "\n"; 
    return 0; 
}