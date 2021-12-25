#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp(x,y) make_pair(x,y)

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
	for (int i = 1; i < s.size(); i++){
		if (s[i] == s[i-1]){
			cnt++;
			i++;
			while(s[i] == s[i-1]){
				cnt++;
				i++;
			}
			i--;

		}
	}
	//cout << "cnt : " << cnt << endl;
	
	cout << cnt / 2 + cnt % 2<< endl;
}

void onlineJudge(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
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