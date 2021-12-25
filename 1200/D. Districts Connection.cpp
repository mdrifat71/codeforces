#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp(x,y) make_pair(x,y)

void solve2(){
	int n; cin >> n;
	vector <int> a(n);
	vector <pair<int,int>> res;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int idx = -1;
	for (int i = 1; i < n; i++){
		if (a[i] != a[0]){
			idx = i;
			res.push_back({1, i+1});
		}
	}
	if (idx == -1){
		cout << "NO" << endl;
		return;
	}
	cout << "Yes" << endl;

	for (int i = 1; i < n;i++){
		if (a[0] == a[i])
			res.push_back({idx+1, i+1});
	}

	for(auto pr : res) 
		cout << pr.first << " " << pr.second << endl;
}
void solve(){
	int n; cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int ai = -1, bi = -1;
	int av, bv;
	for (int i = 1; i < n; i++){
		if (a[i] != a[i-1]){
			ai = i;
			bi = i-1;
			av = a[i], bv = a[i-1];
		}
	}
	if (ai ==  -1){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++){
		if (a[i] != av ){
			cout << ai + 1 << " " << i+1 << endl;
		}
	}
	
	for (int i = 0; i < n; i++){
		if (i != ai && a[i] == av){
			cout << bi + 1 << " " << i+1 << endl; 
		}
	}

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
		solve2();
	}
}