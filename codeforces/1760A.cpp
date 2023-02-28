#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    vector <int> n(3); cin >> n[0] >> n[1] >> n[2];
    sort(n.begin(), n.end());
    cout << n[1] << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}