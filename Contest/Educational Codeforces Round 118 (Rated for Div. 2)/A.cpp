#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp(x,y) make_pair(x,y)

//debugging
#ifndef ONLINE_JUDGE
#define deb(x) cout << #x << ": " << x << endl
#define deb2(x,y) cout << #x << ": " << x <<  " " <<#y << ": " << y << endl
#else
#define	deb(x)
#define deb2(x,y)
#endif

int pow(int n, int m){
	if (m == 0)
		return 1;
	int x = pow(n, m/2);
	if (m % 2 != 0)
		return x * x * n;
	return x * x;
}
void solve(){
	int a, p, b, q; cin >> a >> p >> b >> q;
	vector <int> ac, bc;
	int x = a;
	int y = b;
	while(x != 0){
		ac.push_back(x % 10);
		x = x / 10;
	}

	while(y != 0){
		bc.push_back(y % 10);
		y = y/10;
	}

	
		
//	deb2(a,b);
	if (ac.size() + p > bc.size() + q){
		cout << '>' << endl;
	}else if (ac.size() + p < bc.size() + q){
		cout << '<' << endl;
	}else{
		if (ac.size() > bc.size()){
			b *= pow(10, ac.size()-bc.size());
		}else if (ac.size() < bc.size())
			a *= pow(10, bc.size()-ac.size());

		//deb2(a,b);
		if (a > b)
			cout << ">" << endl;
		else if (a < b){
			cout << '<' << endl;
		}else{
			cout << '=' << endl;
		}
	}
}



		
	


void onlineJudge(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
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