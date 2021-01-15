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
//Prime sieve
const long long max_length = 1e7 + 9;
bool prime_sieve[max_length]; 
template<typename T>
void sieve(T x){
    prime_sieve[0] = 0;
    prime_sieve[1] = 0;
    loop(i, 2, x + 1, 1)
        prime_sieve[i] = 1;
    for (T i = 2; i * i<= x; ++i)
        if (prime_sieve[i])
            for (T j = i*i; j <= x; j +=i)
                prime_sieve[j] = 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    int n;
    cin >> n;
    sieve<int>(n);
    int n1 = 0, n2 = 0;
    loopeach(i, 2, n + 1)
        if (prime_sieve[i] == 1 && n % i == 0){
            n1++;
            n2+=i;
        }
    cout << n1 << " " << n2 << endl;
    return 0;
}