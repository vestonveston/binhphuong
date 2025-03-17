#include <bits/stdc++.h>

using namespace std;


void home(){
    freopen("binhphuong.inp", "r", stdin);
    freopen("binhphuong.out", "w", stdout);
}

long long n;
void nhap(){
    cin >> n;
}

void solve(){
    if(n == 0){
        cout << "Yes" << '\n' << 56 << ' ' << 56;
    }
    else if(n == 1){
        cout << "No";
    }
    else if(n % 2 == 1){
        long long x = (n-1)/2;
        cout << "Yes" << '\n' << x + 1 << ' ' << x;
    }
    else {
        if(n <= 4 || n%4 != 0)cout << "No";
        else {
            long long x = n/4 - 1;
            cout << "Yes" << '\n' << x + 2 << ' ' << x;
        }
    }
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0); cout.tie(0); home();
    nhap();
    solve();
    return 0;
}
