#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
#define inf 1000000000
#define fi first
#define se second
#define pa pair
#define mp make_pair
#define pb push_back
#define ve vector<ll>
#define vep vector< pa<ll ,ll> >
#define c(t) cout<<t<<"\n"
using namespace std;
const ll INF = 1000000000;
vector<vector<pair<ll, ll> > > adj;
vector<ll> d,p;
ll dijkstra(ll s, vector<ll> &  d, vector<ll> & p,ll e)
 {
    ll n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);

    d[s] = 0;
    for (ll i = 0; i < n; i++) {
        ll v = -1;
        for (ll j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }

        if (d[v] == INF)
            break;

        u[v] = true;
        for (ll edge=0; edge<adj[v].size();edge++) {
            ll to = adj[v][edge].first;
            ll len = adj[v][edge].second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
    return d[e];
}
vector<ll> restore_path(ll s, ll t, vector<ll> const& p) {
    vector<ll> path;

    for (ll v = t; v != s; v = p[v])
        path.push_back(v);
    path.push_back(s);

    reverse(path.begin(), path.end());
    return path;
}
void solve()
{  ll n,e,t,m;
   cin>>n>>e>>t>>m;
   vep o;
   o.assign(n+1,mp(0,0));
   adj.assign(n+1,o);
   vep dc[n+1];
   f(i,0,m)
   {
       ll a,b,c;
       cin>>a>>b>>c;
       dc[a].pb(mp(b,c));
       adj[a]=dc[a];
   }
   ll x=0,cv[n];
   f(i,1,n+1)
   {cv[i-1]=dijkstra(i,d,p,e);}
   f(i,1,n+1)
   {
       if(cv[i-1]<=t)
        x++;
   }
   c(x);
}
int main()
{
    ios::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--)
    {

        solve();
    }
return 0;
}
