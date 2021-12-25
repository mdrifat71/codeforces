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
	int x, y; cin >> x >> y;
	int df = y-x;
	int e = n-1;
	while(e != 1){
		if (df % e == 0){
			break;
		}
		else
			e--;
	}
	int g = df / e;

	int rem = n - e - 1;
	int l = x;
	//deb(rem);
	//deb(g);
	while(rem != 0 && l-g > 0){
		l = l-g;
		rem--;
	}


	while(n != 0){
		cout << l << " ";
		l += g;
		n--;
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
