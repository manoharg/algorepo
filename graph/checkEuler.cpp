/*
	Check if an undirected graph has eulerian cycle or not
	Complexity: O(n)
	handle: calmhandtitan
*/
#include "bits/stdc++.h"
#define sd(n) scanf("%d", &(n))
#define rep(i, x, n) for (int i = x, _n = (n); i < _n; ++i)
#define repi(i, a) for(typeof((a).begin()) i = (a).begin(), _##i = (a).end(); i != _##i; ++i)
#define pra(v) repi(it, v) cout << *it << " "; cout << endl;
#define SZ(c) (int)(c).size()
#define lcm(a,b) (a*(b/__gcd(a,b)))
#define VI vector<int>
#define all(c) (c).begin(), (c).end()
#define allr(c) (c).rbegin(), (c).rend()
#define pb push_back
#define mii map<int, int>
#define pii pair<int, int>
#define pip pair<int, pii>
#define F first
#define S second
#define mp make_pair
#define lli long long int
#define llu unsigned long long
#define CLR(p) memset(p, 0, sizeof(p))
#define SET(p) memset(p, -1, sizeof(p))
#define INF 0x3f3f3f3f
#define pi 3.141592653589793
#define debug 0
using namespace std;

const int MOD = 1e9+7;
const int MAX = 100010;
const double eps = -1e8;

int n, m, x, y, deg[MAX], odd;

int main()
{
	ios_base::sync_with_stdio(0);
	sd(n);
	sd(m);
	rep(i, 0, m)
	{
		sd(x);
		sd(y);
		x--, y--;
		deg[x]++, deg[y]++;
	}
	rep(i, 0, n)
		if(deg[i]&1) odd++;
	if(odd == 0)
		printf("Graph has Euler cycle(s)\n");
	else if(odd == 2)
		printf("Graph has Eulerian path(s) but no euler cycle\n");
	else
		printf("Graph is not Eulerian\n");
    return 0;
}    
