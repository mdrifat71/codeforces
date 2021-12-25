#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp(x,y) make_pair(x,y)
#define deb(x) cout << "x : " << x << endl;
void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int g = 0, l = 0;
	int cnt = 0;
	char prev = 'x';
	for (int i = 0; i < n; i++){
		if (s[i] == '<')
			g++;
		else if (s[i] == '>')
			l++;
		else{
			if (i == n-1 && s[0] == '-'){
				if (prev != '-')
					cnt++;
			}else{
				if (prev == '-')
					cnt++;
				else
					cnt += 2;
			}

		}
		//deb(cnt);
		prev = s[i];
	}

	if (g == 0 || l == 0)
		cout << n << endl;
	else
		cout << cnt << endl;
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