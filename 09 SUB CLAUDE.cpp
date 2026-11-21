#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int a, b; 
    cin >> a >> b; 
    while (b != 0) { 
        int r = a % b;  // resto calculado com os valores antigos 
        a = b; 
        b = r; 
    } 
    cout << a << "\n"; 
    return 0; 
}