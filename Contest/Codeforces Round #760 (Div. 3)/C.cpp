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
ll gcd(ll a, ll b){
	if (b == 0)
		return a;
	return gcd(b, a%b);
}
void solve(){
	int n; cin >> n;
	vector <ll> a, b;
	for (int i = 0; i < n; i++){
		ll tmp; cin >> tmp;
		if (i % 2 == 0)
			a.push_back(tmp);
		else
			b.push_back(tmp);
	}

	ll g = a[0];
	for (int i = 1; i < a.size(); i++){
		g = gcd(g, a[i]);
	}
	ll g2 = b[0];
	for (int i = 1; i < b.size(); i++){
			g2 = gcd(g2,b[i]);
	}

	bool x = true, y = true;
	for (int i = 0; i < a.size(); i++){
		if (a[i] % g2 == 0){
			x = false;
			break;
		}
	}

	for (int i = 0; i < b.size(); i++){
		if (b[i] % g == 0){
			y = false;
			break;
		}
	}
	
		
		
	if (x)
		cout << g2 << endl;
	else if (y)
		cout << g << endl;
	else
		cout << 0 << endl;
	

	
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