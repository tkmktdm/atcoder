#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, x, N) for (long long i=x; i<N; i++)

template <typename T>
inline bool chmax(T& a, const T& b) {
    bool compare = a < b;
    if(a < b) a = b;
    return compare;
}
int main() {
    ll N;
    int A[31][31] = {0};
    cin >> N;
    string s;
    rep(i, 0, N) {
        cin >> s;
        cout<<s<<endl;
        rep(j, 0, N) {
            int t = s[j] - '0';
            rep(a, 0, 3) {
                rep(b, 0, 3) {
                    A[i + a * N][j + b * N] = t;
                }
            }
        }
    }
 
    ll _s = 0;
    int t1[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int t2[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    rep(i, N, N * 2) {
        rep(j, N, N * 2) {
            rep(b, 0, 8) {
                ll __s = 0;
                rep(a, 0, N) {
                    __s *= 10;
                    __s += A[i + t1[b] * a][j + t2[b] * a];
                }
                chmax(_s, __s);
            }
        }
    }
    cout << _s << endl;
}
