#include <iostream>
using namespace std;

void solve(){
    int lineN;
    cin >> lineN;
    string line;
    cin >> line;
    if(lineN == 2) {cout << 2 << "\n"; return;};
    int sub = 0;
    for(int i = 1; i <= lineN; i++){
        int f1 = 0, f2 = 0;
        for(int k = 0; k < lineN; k++){
            if(k < i){
                int v = 0;
                for(int j = 0; j < k; j++)
                    if(line[k] != line[j])
                        v++;
                if(v == k)
                    f1++;
            }else{
                int v = 0;
                for(int j = i; j < k; j++)
                    if(line[k] != line[j])
                        v++;
                if(v == k - i)
                    f2++;
            }
        }
        sub = (sub < f1+f2) ? (f1+f2) : sub;
    }
    cout << sub << "\n";
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        solve();
}