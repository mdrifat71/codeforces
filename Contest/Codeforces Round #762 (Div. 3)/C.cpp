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


int getNum(char a){
	return a - '0';
}

int getNum(string s, int i){
	if (i <= 0)
		return -1;

	int x = s[i-1] - '0';
	x *= 10;
	x += s[i] - '0';
	return x;
}

char getChar(int n){
	return '0' + n;
}
void solve(){
	string a, b; cin >> a >> b;
	string ans = "";

	while(!a.empty() && !b.empty()){
		int ad =  a.back() - '0';
		int bd =  b.back() - '0';
		a.pop_back(); b.pop_back();
		
		if (ad > bd && b.empty()){
			return void(cout << -1 << endl);
		}

		if (ad > bd){
			if (b.back() != '1'){
				return void (cout << -1 << endl);
			}

			bd += ( b.back() - '0') * 10;
			b.pop_back();			
		}
		ans = to_string(bd-ad) + ans;
	}

	if (!a.empty()){
		return void(cout << -1 << endl);
	}

	ans = b + ans;
	int i = 0;
	while (ans[i] == '0') i++;
	ans = ans.substr(i);
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