

#include <bits/stdc++.h>

using namespace std;

char arr[100][100];

int main()
{
    int m,n; cin >> n >> m;
    char c; cin >> c;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    set <char> mem;

    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    */
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == c)
            {

                if (i != 0 && arr[i-1][j] != c && arr[i-1][j] !='.')
                    mem.insert(arr[i-1][j]);

                if (i != n-1 && arr[i+1][j] != c && arr[i+1][j] != '.')
                    mem.insert(arr[i+1][j]);

                if (j != 0 && arr[i][j-1] != c && arr[i][j-1] != '.')
                    mem.insert(arr[i][j-1]);

                if (j != m-1 && arr[i][j+1] != c && arr[i][j+1] != '.')
                    mem.insert(arr[i][j+1]);
            }
        }

    }
    cout << mem.size() <<endl;
}

/*

#include <bits/stdc++.h>
#define loop(x,n) for(int x = 0; x < n; ++x)
#define revloop(x,n) for(int x = n-1; x >= 0; --x)
#define loopi(x,n,i) for(int x = i; x < n; ++x)

using namespace std;
long double pi=3.1415926536;

int main(){
	int r,c;
	char p;
	cin >> r >> c >>p;
	vector<string> a(r);
	loop(i,r)
	cin >> a[i];
	set<char> n;
	loop(i,r){
		loop(j,c){
			if(a[i][j]==p){
				if(i!=0 && a[i-1][j]!='.'&& a[i-1][j]!=p)
				n.insert(a[i-1][j]);
				if(i!=r-1 && a[i+1][j]!='.'&& a[i+1][j]!=p)
				n.insert(a[i+1][j]);
				if(j!=0 && a[i][j-1]!='.'&& a[i][j-1]!=p)
				n.insert(a[i][j-1]);
				if(j!=c-1 && a[i][j+1]!='.'&& a[i][j+1]!=p)
				n.insert(a[i][j+1]);
			}
		}
	}
	cout << n.size();
}
*/
