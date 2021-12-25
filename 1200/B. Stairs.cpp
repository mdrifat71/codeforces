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
#endifenum name
{
	
};


void solve(){
	ll x; cin >> x;
	ll i = 1;
	ll cnt = 0;
	while(true){
		ll c = (1 << i) - 1;
		ll sum = (c*(c+1))/2;
		if(sum <= x){
			cnt++;
			x -= sum;
		}else
			break;
		 i++;
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