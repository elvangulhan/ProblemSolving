#include <iostream>

using namespace std;

void solve(){
    int a, b, c = 0; cin >> a >> b >> c;
    cout << (a == b ? c : (a == c) ? b : a) << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}