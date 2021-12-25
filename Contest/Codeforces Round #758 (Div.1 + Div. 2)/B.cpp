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
	int n, a, b; cin >> n >> a >> b;
	int M = a+b+2;
	if (a+b  <= n-2 && abs(a-b) <= 1){
		int i = 1, j = n;
		if (a > b){
			for (; i <= n - M; i++)
				cout << i << " ";

			int k = 0;
			while (i <= j){
				if (k % 2 == 0){
					cout << i << " ";
					i++;
				}else{
					cout << j << " ";
					j--;
				}
				k++;
			}
		}else{

			for (j; j >  M; j--){
				cout << j << " ";
			}

			int k = 0;
			while (i <= j){
				if (k % 2 == 0){
					cout << j << " ";
					j--;
				}else{
					cout << i << " ";
					i++;
				}
				k++;
			}

		}

		cout << endl;
	}else{
		cout << -1 << endl;
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