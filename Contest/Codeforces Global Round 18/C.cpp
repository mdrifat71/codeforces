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
#define inf INT_MAX-1;
void print(vector <int> a){
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}

int operation(string a, string b){
	int n = a.size();
	int x,y;
	x = y = 0;
	for (int i = 0; i < n; i++){
		if (a[i] != b[i]){
			if (a[i] == '1')
				x++;
			else
				y++;
		}
	}
	if (x != y)
			return inf;
	return 2 * x;
}

int change(string a, string b, char x){
	int n = a.size();
	int idx = -1;
	for (int i = 0; i < n; i++){
		if (a[i] == '1' && b[i] == x){
			idx = i;
			break;
		}		
	}
	
	if (idx == -1)
		return inf;
	for (int i = 0; i < n; i++){
		if (i == idx)
				continue;
		a[i] = a[i] == '1' ? '0' : '1';
	}
	return operation(a, b);	
}



void solve(){
	int n; cin >> n;
	string a, b; cin >> a >> b;	

	int ans = operation(a,b);
	ans = min(ans, 1 + change(a,b,'1'));
	ans = min(ans, 1 + change(a,b,'0'));
	if (ans == INT_MAX-1){
		cout << -1 << endl;
	}else{
		cout<< ans << endl;
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

tp gcd(tp a, tp b){
	if (b == 0)
		return a;
	return gcd(b, a % b);
}