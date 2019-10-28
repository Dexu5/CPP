#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    lli t;
    cin >> t;
    while(t--)
    {
        lli n, k; //n -> apples k -> empty boxes
        cin >> n >> k;
        //cout << n << " " << k << endl;
        if(k == 1 || n / k == k)
        {
            //cout << n << " " << k << endl;
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }
    
}