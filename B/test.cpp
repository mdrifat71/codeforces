
#include <bits/stdc++.h>
using namespace std;

int a[200010];

int main(){
	ios::sync_with_stdio(0);
	int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n*k;i++)
            cin>>a[i];
        long long ans=0;
        if(n==2){
            ans=a[1];
            for(int i=1;i<=k-1;i++){
                ans+=a[i*2+1];
            }
        }
        else{
            int flag;
            if(n%2==0){
                flag=n/2;
            }
            else{
                flag=n/2+1;
            }

            int res=(flag-1)*k;
            res++;
            ans=a[res];
            if(n%2==0)
                flag++;
            //cout<<res<<endl;
            for(int i=1;i<=k-1;i++){
                cout << a[res]<<endl;
                ans+=a[res+i*flag];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
