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
//Utility//

tp pow(tp n, tp m){
	if (m == 0)
		return (tp)1;
	tp x = pow(n, m/2);
	if (m % 2 != 0)
		return x * x * n;
	return x * x;
}

void print(vector <tp> a){
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}
void solve(){
	vector <int>a (4);
	int d;
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	cin >> d;
	vector<int> b(d+1, 0);
	for (int i = 0; i < 4; i++){
		int j = a[i];
		while(j <= d){
			b[j] = 1;
			j += a[i];
		}
	}

	cout << accumulate(b.begin(), b.end(), 0) << endl;
}

void onlineJudge(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    #ifndef codeblocks
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 

}
int main()
{
	onlineJudge();
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
}

