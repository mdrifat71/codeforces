#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp(x,y) make_pair(x,y)

//deb

//debugging
#ifndef ONLINE_JUDGE
#define deb(x) cerr << #x << ": " << x << endl
#define deb2(x,y) cerr << #x << ": " << x <<  " " <<#y << ": " << y << endl
#else
#define	deb(x)
#define deb2(x,y)
#endif


bool isPos(vector<ll> a, ll n, ll k, ll h){
	for (int i = 1; i < n; i++){
		if (a[i] - a[i-1] >= k)
			h -= k;
		else
			h -= (a[i]-a[i-1]);
	}
	if (h <= k)
		return true;
	return false;
}
void solve(){
	ll n, h; cin >> n >> h;
	vector <ll> a(n);
	for (int i = 0; i < n;i++)
		cin >> a[i];

	ll l = 1, r = h;
	ll k = h;
	while (l <= r){
		ll m = (l+r)/2;
		 if (isPos(a,n,m,h)){
			k = m;
			r = m-1;
		}else{
			l = m+1;
		}
	}
	cout << k << endl;
}

void onlineJudge(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 

}
int main()
{
	onlineJudge();
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}