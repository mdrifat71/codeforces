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


void solve2(){
	int N; cin >> N;
	vector <int> a(N);
	for (auto &v : a){
		cin >> v;
	}

	sort(all(a));
	int ans = 0;

	int s = 0;
	for (int i = 0; i < N; i++){
		s++;
		if (s >= a[i]){
			ans++;
			s = 0;
		}
	}

	cout << ans << endl;
}

void solve(){
	int N; cin >> N;
	vector <int> a(N);
	for (auto &v : a){
		cin >> v;
	}
	sort(a.begin(), a.end());

	int ans = 0;
	int i = 0;
	while(i < N){
		int j = i + a[i];
		int prev = a[i];
		while(i < j){
			if (prev < a[i])
				j += a[i] - prev;
			prev = a[i];
			i++;
		}

		if (i <= N)
			ans++;
	}

	cout << ans << endl;

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
		solve2();
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