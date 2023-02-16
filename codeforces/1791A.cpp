#include <iostream>
using namespace std;

const string letters = "codeforces";

void solve(){
    char line;
    cin >> line;
    for(char l: letters){
        if(l == line){
            cout << "yes\n";
            return;
        }
    }
    cout << "no\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}