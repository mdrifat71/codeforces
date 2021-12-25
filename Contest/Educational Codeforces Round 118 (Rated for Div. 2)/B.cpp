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
	vector <int> a(n);
	int mn = INT_MAX;
	for (int i= 0; i< n;i++){
		cin >> a[i];
		if (a[i] < mn)
			mn = a[i];
	}

	int x = n/2;
	for (int i = 0; i < n; i++){
		if (a[i] != mn){
			cout << a[i] << " " << mn << endl;
			x--;
		}
		if (x == 0){
			return ;
		}
	}

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