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


bool clear(int i, int j, vector<vector<int>> &a){
	int cnt = 0;
	int n = a.size();
	int m = a[0].size();
	if (i > 0 )
		cnt++;
	if (i < n-1)
		cnt++;
	if (j > 0 )
		cnt++;
	if (j < m-1)
		cnt++;
	if (a[i][j] > cnt)
		return false;
	a[i][j] = cnt;
	return true;

}

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n;i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
			a[i][j] = max(1, a[i][j]);
		}
	}

	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if(!clear(i,j,a)){
				cout << "NO" << endl;
				return;
			}
		}
	}

	cout << "YES" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
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