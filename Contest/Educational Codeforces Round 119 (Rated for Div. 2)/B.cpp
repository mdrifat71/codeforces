#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()

//debugging

#define deb(x) cout << #x << ": " << x << endl
#define deb2(x,y) cout << #x << ": " << x <<  " " <<#y << ": " << y << endl

//Utility
#define tp int

void print(vector <int> a){
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}

ll getWidth(){

	ll l, f, k;
	cin >> k;
	for (int i = 0; i < k; i++){
		int tmp; cin >> tmp;
		if (i == 0){
			f = tmp;
		}else{
			l = tmp;
		}
	}

	return l - f;
}

void solve(){
	ll w, h; cin >> w >> h;
	ll wx = 0;
	ll wy = 0;


	wx = max(wx, getWidth());
	wx = max(wx, getWidth());
	wy = max(wy, getWidth());
	wy = max(wy, getWidth());

	ll x = wx * h;
	ll y = wy * w;
	if (x > y)
		cout << x << endl;
	else
		cout << y << endl;
}

void onlineJudge(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	#if !defined(ONLINE_JUDGE) && !defined(codeblocks)
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	#if defined(codeblocks) && !defined(ONLINE_JUDGE)
		freopen("input.txt", "r", stdin);
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

//Utility//

tp pow(tp n, tp m){
	if (m == 0)
		return (tp)1;
	tp x = pow(n, m/2);
	if (m % 2 != 0)
		return x * x * n;
	return x * x;
}

tp gcd(tp a, tp b){
	if (b == 0)
		return a;
	return gcd(b, a % b);
}