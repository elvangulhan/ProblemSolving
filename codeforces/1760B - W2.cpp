#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n; string w; cin >> n >> w;
    sort(w.begin(), w.end());
    cout << w.back() - 'a' + 1 << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}