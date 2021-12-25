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

void solve(){
	int n; cin >> n;
	vector <ll> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	
	sort(a.begin(), a.end(), greater<int>());
	ll pr = 1;
	if (a[0] < 0){
		for (int i = 0; i < 5; i++){
			pr *= a[i];
		}
		cout << pr << endl;
		return;
	}
	sort(a.begin(), a.end(), [] (ll a, ll b){return abs(a) > abs(b);});

	pr = a[0] * a[1] * a[2] * a[3] * a[4];
	
	if (pr < 0){
		ll tpr = pr;
		for (int i = 5; i < n; i++){
			for (int j = 4; j >= 0; j--){
				if ((pr / a[j]) * a[i] > tpr){
					tpr = (pr / a[j]) * a[i];
				}
			}
		}

		cout << tpr << endl;

	}else{
		cout << pr << endl;
	}

	
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