 #include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define pi 3.1415926535
#define endl '\n'
using namespace std;
struct custom {
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//using namespace __gnu_pbds;
//typedef tree<ll,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
const ll inf=1e18;
/*ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y%2==1)
            res=((res)*(x))%mod;
        x=((x)*(x))%mod;
        y=(y>>1);
    }
    return res;
}*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m,x,y;
       cin>>n>>m;
       n++,m++;
       x=__builtin_popcount(n);
       y=__builtin_popcount(m);
       if(x==y)
       {
           cout<<0<<" "<<0<<endl;
       }
       else if(x<y)
       {
           cout<<1<<" "<<y-x<<endl;
       }
       else
        cout<<2<<" "<<x-y<<endl;
    }
}
