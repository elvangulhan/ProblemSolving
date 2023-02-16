#include <iostream>
using namespace std;

void solve(){
    int lineN;
    cin >> lineN;
    string line;
    cin >> line;
    for(int i = 0; i < lineN; i++){
        int t1 = ((int)line[i] == 48) ? 0 : 1;
        int t2 = ((int)line[lineN-i-1] == 48) ? 0 : 1;
        if((t1 + t2) != 1){
            cout << (lineN - (i * 2)) << "\n";
            return;
        }
    }
    cout << 0 << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}