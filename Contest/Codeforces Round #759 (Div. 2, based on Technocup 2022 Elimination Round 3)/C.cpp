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
	int n,k; cin >> n >> k;
	vector <int> a;
	vector <int> b;
	int mx = INT_MIN;
	for (int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		if (tmp > 0)
			a.push_back(tmp);
		else
			b.push_back(abs(tmp));
		mx = max(mx, abs(tmp));
	}

	ll cnt = 0;

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());


	int asize = a.size() ;
	int bsize = b.size() ;

    if (asize != 0)
        cnt += a[asize-1] * 2;
    if (bsize != 0)
        cnt += b[bsize-1] * 2;

	asize -= k;
	bsize -= k;
	for (int i = asize-1; i >= 0; i -= k){
			cnt += (ll) a[i] * 2;

	}


	for (int i = bsize-1; i >= 0; i -= k){
			cnt += (ll) b[i] * 2;

	}

    cnt -= mx;
	cout << cnt << endl;
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
