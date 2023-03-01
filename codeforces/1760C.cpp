#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> m(n);
    vector <int> k(n);
    for(int i = 0; i < n; i++){
        cin >> m[i];
        k[i] = m[i];
    }
    sort(m.begin(), m.end());
    reverse(m.begin(), m.end());
    for(int i = 0; i < n; i++){
        if(k[i] != m[0]){
            cout << k[i] - m[0] << " ";
        }else{
            cout << k[i] - m[1] << " ";
        }
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}