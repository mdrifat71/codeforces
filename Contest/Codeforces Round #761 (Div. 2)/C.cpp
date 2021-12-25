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
	int n; cin >> n;
	set <int> a;
	vector <int> v;
	for (int i = 1; i <= n; i++)
		a.insert(i);
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		if (a.count(x))
			a.erase(x);
		else
			v.pb(x);
	}
	
	if (v.size() != a.size()){
		cout << -1 << endl;
		return;
	}
	sort(v.begin(), v.end());


	int i = 0;

	for (int s : a){
		//deb2(v[i], s);
		if (s * 2 >= v[i++] ){
			cout << -1 << endl;
			return;
		}
		
	}
	cout << v.size() << endl;
	
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