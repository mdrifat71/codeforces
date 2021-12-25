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

void solve(){
	int q; cin >> q;
	vector <int> a;
	unordered_map <int, vector<int>> mem;

	while(q--){
		int k; cin >> k;
		if (k == 1){
			int x; cin >> x;
			a.push_back(x);
			mem[x].push_back(a.size()-1);
		}else{
			int x,y; cin >> x >> y;
			if (x == y)
				continue;
			for (auto idx : mem[x]){
				a[idx] = y;
				mem[y].push_back(idx);
			}
			mem[x] ={};

			
			
		}
	}

	for (int i = 0; i < a.size(); i++){
		cout << a[i] << " ";
	}
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
//	cin >> t;
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