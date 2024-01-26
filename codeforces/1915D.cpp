#include <iostream>
#include <cmath>

using namespace std;

void solve(){
    // a, e | b, c, d
    int l; string w, r = ""; cin >> l >> w;
    for(int i = 1; i < l; i++){
        if(w[i] == 'a' || w[i] == 'e'){
            r = r+w[i-1]+w[i];
            if(w[i+2] != 'a' && w[i+2] != 'e' && i+2 <= l)
                r = r + w[i+1];
            if(i+2 != l && i+1 != l)
                r = r + '.';
        }
    }
    cout << r << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}