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


void solve(){
	int n; cin >> n;
	ll cnt = 0;
	int a[33];
	fill(a, a+33, 0);
	for (int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		int d = log2(tmp) + 1;
		a[d]++;
	}

	for (int i = 0; i < 33;i++){
		ll x = (ll)a[i];
		cnt += ((x-1)*x)/2;
	}
	cout << cnt << endl;
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