#include<bits/stdc++.h>
#include<algorithm>
#include<bitset>
#include<cstdlib>
#include<iomanip>
using namespace std;

#define TEST int T; cin >> T; while (T--)
#define int long long 
#define PB push_back
#define PP pop_back
#define MP make_pair
#define MOD(n) n%1000000007
#define VLL vector <long long>
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for(long long i=0; i<n; i++)
#define SORT(Series) sort(Series.begin(), Series.end());
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int32_t main()
{
    Radhe Krishna
    TEST
    {
        int X, Y, Z, count=1;
        cin >> X >> Y >> Z;
        while(X%2==0)
        {
            count*=2;
            X/=2;
        }
        while(Y%2==0)
        {
            count*=2;
            Y/=2;
        }
        (count>=Z) ? (cout << "YES") : (cout << "NO");
        cout << endl;
    }
    return 0;
}