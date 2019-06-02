#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
#define fi first
#define se second
#define pa pair
#define mp make_pair
#define pb push_back
#define ve vector<ll>
#define vep vector< pa<ll ,ll> >
#define c(t) cout<<t<<"\n"
using namespace std;
ve parent,size;
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void make_set(int v) {
    parent[v] = v;
    size[v] = 1;
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}
void solve()
{  ll n,m;
cin>>n>>m;
parent.assign(n+1,0);
size.assign(n+1,0);
f(i,0,n)
make_set(i);
f(i,0,m)
{
    ll x,y;
    cin>>x>>y;
    union_sets(x,y);
}
map<ll,ll> ma;
ll bv[n];
f(i,0,n)
{
    bv[i]=find_set(i);
    //ma[size[h]]++;
}
f(i,0,n)
{
    ma[bv[i]]++;
}
c(ma.size());
}
int main()
{
    ios::sync_with_stdio(true);
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
