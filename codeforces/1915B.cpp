#include <iostream>

using namespace std;

void solve(){
    string a,b,c; 
    int ca = 0,cb = 0,cc = 0;
    cin >> a >> b >> c;
    a = a + b + c;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == 'A') ca++;
        if(a[i] == 'B') cb++;
        if(a[i] == 'C') cc++;
    }
    cout << (ca == cb ? "C" : (ca == cc) ? "B" : "A") << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}