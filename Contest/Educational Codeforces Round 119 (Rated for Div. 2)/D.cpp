#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define inf INT_MAX-5;
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



void solve(){
	int n; cin >> n;
	vector <int> a (n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int c3 = 0;
	for (int i = 0; i < n; i++){
		if (a[i] % 3 != 0){
			c3 = inf;
			break;
		}
		c3 = max(c3, a[i]/3);
	}

	int c32 = 0;
	for (int i= 0; i < n; i++){
		if (a[i] % 3 == 1){
			c32 = inf;
			break;
		}
		c32 = max(c32, a[i]/3);
	}
	c32++;

	int c31 = 0;

	for (int i = 0; i < n; i++){
		if (a[i] % 3 == 2){
			c31 = inf;
			break;
		}
		c31= max(c31, a[i]/3);
	}
	c31++;

	int c321 = 0;
	for (int i = 0; i < n; i++){
		if (a[i] % 3 != 0){
			c321 = max(c321, a[i]/3);
		}else{
			c321 = max(c321, a[i]/3 - 1);
		}
	}
	c321 += 2;

	int c322 = 0;
	for (int i = 0; i < n; i++){
		if (a[i] == 1){
			c322 = inf;
			break;
		}
		if (a[i] % 3 == 1){
			c322 = max(c322, a[i]/3 - 1);
		}else{
			c322 = max(c322, a[i]/3);
		}
	}
	c322 += 2;
	cout << min({c3, c32, c31, c321, c322}) << endl;
	

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