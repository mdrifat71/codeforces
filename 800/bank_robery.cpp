#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, n; cin >> a >> b >> c >> n;
    int arr[n];
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > b && x < c)
            ct++;
    }
    cout << ct <<endl;
}
/*

#include <bits/stdc++.h>
using namespace std;
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define LL long long
#define rep1(i,a,b) for (int i = a;i <= b;i++)
#define rep2(i,a,b) for (int i = a;i >= b;i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define ms(x,y) memset(x,y,sizeof x)

typedef pair<int,int> pii;
typedef pair<LL,LL> pll;

const int dx[9] = {0,1,-1,0,0,-1,-1,1,1};
const int dy[9] = {0,0,0,-1,1,-1,1,-1,1};
const double pi = acos(-1.0);
const int N = 110;

int a,b,c;
int n;

int main()
{
    //freopen("F:\\rush.txt","r",stdin);
    ios::sync_with_stdio(false),cin.tie(0);//scanf,puts,printf not use
    //init??????
    cin >> a >> b >> c;
    cin >> n;
    int ans = 0;
    rep1(i,1,n)
    {
        int x;
        cin >> x;
        if (x>b && x<c)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
*/
