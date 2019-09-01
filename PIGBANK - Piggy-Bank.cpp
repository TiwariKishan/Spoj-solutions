/*
  Author - KISHAN TIWARI
  Dream bigger. Do bigger.
  Wake up with determination. Go to bed with satisfaction.
*/
//Sometimes later becomes never. Do it now.
#include<bits/stdc++.h>
using namespace std;
#define ll           long long
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define mod          1000000007
#define fi           first
#define se           second
#define pa           pair <ll,ll>
#define mp           make_pair
#define pb           push_back
#define ve           vector<ll>
#define vep          vector< pa >
#define all(a)       a.begin(), a.end()
#define sz(x)        (ll)x.size()
#define c(t)         cout<<t<<"\n"
using namespace std;
ll fu(ll va[],ll wt[],ll n,ll w)
{
    ll dp[w+1];
    //memset(dp,0,sizeof(dp));
    dp[0]=0;
    f(i,1,w+1)
    {  dp[i]=-1;
        f(j,0,n)
        if(i>=wt[j]&&dp[i-wt[j]]!=-1&&(dp[i]==-1||(dp[i]>dp[i-wt[j]]+va[j])))
        dp[i]=dp[i-wt[j]]+va[j];
    }
    return dp[w];
}
void solve()
{  ll in,wr;
cin>>in>>wr;
ll w=wr-in,n;
cin>>n;
ll va[n],wt[n];
f(i,0,n)
{cin>>va[i];
cin>>wt[i];
}
ll ans=(fu(va,wt,n,w));
if(ans!=-1)
cout<<"The minimum amount of money in the piggy-bank is "<<ans<<".\n";
else
cout<<"This is impossible.\n";
}
int main()
{
    ios::sync_with_stdio(true);
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {

        solve();
    }
return 0;
}
