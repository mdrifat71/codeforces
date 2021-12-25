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

sortByPair(pair<int, int> a, pair<int, int> b){
	if (a.first > b.first)
		return true;
	return false;
}
int M = 1e5+2;

vector<int> possible(M,0);
vector <vector<int>> graph(M);

int _player_;

// void dfs(int node){

// 	if (visited[node])
// 		return;

// 	vector <int> current = graph[node];
// 	int n = current.size();
// 	visited[node] = 1;
// 	for (int i = 0; i < n; i++){
// 		dfs(current[i]);
// 	}
// 	cout << node << endl;
// }

int isPossible(int node, vector<int> &visited){
	deb2(node, visited[node]);
	if (node == _player_ || possible[node] == 1){
		possible[node] = 1;
		return 1;
	}
	if (possible[node] = -1 || visited[node])
		return 0;
	
	
	visited[node] = 1;
	vector <int> current = graph[node];
	int n = current.size();
	bool status = 0;
	for (int i = 0; i < n; i++){
		bool istatus = isPossible(current[i], visited);
		deb(istatus);

		if (istatus == 1){
			possible[current[i]] = 1;
			status = 1;
		}
	}

	return status;
	
}
void solve(){

	int n; cin >> n;
	vector <pair <int,int>> a(n);
	vector <pair <int,int>> b(n);
	

	for (int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		a[i].second = i;
		a[i].first = tmp;
	}

	for (int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		b[i].second = i;
		b[i].first = tmp;
	}

	
	sort(a.begin(), a.end(), sortByPair);
	sort(b.begin(), b.end(), sortByPair);

	for (int i = 0; i < n-1; i++){
		int playerOne = a[i].second;
		int playerTwo = a[i+1].second;
		graph[playerOne].push_back(playerTwo);

		playerOne = b[i].second;
		playerTwo = b[i+1].second;
		graph[playerOne].push_back(playerTwo);
	}

	_player_ = a[0].second;
	possible[_player_] = 1;
	
	//dfs(0);
	
	for (int i = 0; i < n; i++){
		if (possible[i] == 1)
			cout << 1;
		else if(possible[i] == -1){
			cout << 0;
		}
		else{
			vector <int> visited(n, 0);

			if (isPossible(i, visited) == 1){
				possible[i] = 1;
				cout << 1;
			}else{
				possible[i] = -1;
				cout << 0;
			}
		}
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
