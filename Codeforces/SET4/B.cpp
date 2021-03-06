#include <bits/stdc++.h>
#define loop(i, a, b, c) for(__typeof(a) i=(a), _b=(b), _c=(c); i<_b; i+=_c)
#define loopeach(i, a, b) for(__typeof(a) i = (a), _b=(b); i <_b;++i)
#define loopback(i,a,b,c) for(__typeof(a) i=(a),_b=(b), _c=(c); i>=_b; i-=_c)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
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
#define PR0(a,n) { cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl; }
#define sqr(x) ((x) * (x)) 
#define ff first
#define ss second 
#define oo 1e99
using namespace std;
int scs(int n){
    int cnt = 0;
    while (n > 0){
        cnt++;
        n/=10;
    }
    return cnt;
}
int sum(int n){
    int sum = 0;
    while (n > 0){
        sum+= (n % 10);
        n/=10;
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    readln(a, n);
    int maxscs = 0, maxsum = 0;
    loopeach(i, 0, n){
        if (maxscs < scs(a[i])){
            maxscs = scs(a[i]);
            maxsum = sum(a[i]);
        }
        else if (maxscs == scs(a[i])){
            maxsum = max(maxsum, sum(a[i]));
        }
    }
    sort(a, a + n);
    loopeach(i, 0, n){
        if (maxscs == scs(a[i]) && maxsum == sum(a[i]))
            cout << a[i] << " ";
    }
    return 0;
}