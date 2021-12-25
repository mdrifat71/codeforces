#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)


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

void print_ex(vector <int> a, int x){
	for (int i = 0; i < a.size(); i++){
		if (a[i] != x)
			cout << a[i] << " ";
	}
	cout << endl;
}

void solve(){
	ll n; cin >> n;
	vector <ll> a(n);
	ll cn_sum = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		cn_sum += a[i];
	}

	ll sum = (n * (n+1))/2LL;

	if (cn_sum % sum != 0){
		cout << "NO" << endl;
		return;
	}

	vector <ll> ans;

	sum = cn_sum / sum;

	for (int i = 0; i < n; i++){
		int last = i-1;
		if (last < 0)
			last = n-1;
		ll x = a[last] - a[i];
		x = sum + x;
		if (x % n == 0 && x > 0)
			ans.push_back(x/n);
		else{
			cout << "NO" << endl;
			return;
		}
	}

	

	cout << "YES" << endl;
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	cout << endl;



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