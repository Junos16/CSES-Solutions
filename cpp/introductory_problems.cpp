#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define nrep(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, a, b, c) for (int i = a; i < b; i += c)
#define NFOR(i, a, b, c) for (int i = a; i > b; i -= c)

using l = long;
using ul = unsigned long;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using vs = vector<string>;
using vp = vector<pii>;
using vv = vector<vi>;
using mii = map<int, int>;
using umii = unordered_map<int, int>;
using si = set<int>;
using usi = unordered_set<int>;
using msi = multiset<int>;
using umsi = unordered_multiset<int>;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define endl '\n'

const double pi = acos(-1.0);
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void weird_algorithm() {
    ll n;
    cin >> n;
    while (n > 1) {
        cout << n;
        n = n % 2 == 0 ? n / 2 : 3 * n + 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    weird_algorithm();
    return 0;
}
