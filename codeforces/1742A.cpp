#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

void solve(){
    int a,b,c; cin >> a >> b >> c;
    cout << ((a+b == c || a+c == b || c+b == a) ? "yes\n" : "no\n");
}
 
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}