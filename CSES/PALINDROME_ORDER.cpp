#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define ll long long
#define read(n) int n; cin >> n
#define readln(a,n) int n; cin >> n; int a[n]; loopeach(i, 0, n) cin >> a[i];
#define vii vector<pair<int, int>> 
#define vll vector<pair<long long, long long>> 
#define each(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define DEBUG(x) { cout << #x << " = "; cout << (x) << endl; }
#define PR(a,n) {loop(_, 0,n, 1) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 1e99
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    string s;
    cin >> s;
    int c[26] = {}, c1 = 0;
    for (char d : s)
        ++c[d - 'A'];
    PR(c, 26);
    for (int i = 0; i < 26; ++i){ 
        c1 += c[i] & 1;
    }
    string t;
    loopeach(i, 0, 26)
        if (c[i] & 1 ^ 1)
            loopeach(j, 0, c[i])
                t+=(char)('A' + j);

    if (c1 > 1)
        cout << "NO SOLUTION" << endl;
    for (int i = 0; i < 26; ++i)
            for (int j = i; j < c[i]; ++j)
        if (c[i] & 1)
                cout<< (char)('A' + j);
    reverse(t.begin(), t.end());
    return 0;
}