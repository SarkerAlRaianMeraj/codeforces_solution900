//A. Keyboard 474A

#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define str string
#define f(i, n) for (long long i = 0; i < n; i++)
#define pb push_back

using namespace std;

/*bool prime(ll n)
{
    if(n<=1)return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(ll i=3;i<sqrt(n);i+=2)
    {
        if(n%i==0)return false;

    }return true;
}*/

void solve()
{
    bool flag = false;
    str ss;
    char s;
    cin>>s>>ss;
    str a,b,c;
    a="qwertyuiopasdfghjkl;zxcvbnm,./";
    ll x=0;

     if(s=='R')
    {
        for(ll i=0; i<ss.size(); i++)
        {
            x=a.find(ss[i]);
            cout<<a[x-1];
            //cout<<x<<endl;
        }

    }
    else
    {
        for(ll i=0; i<ss.size(); i++)
        {
            x=a.find(ss[i]);
            cout<<a[x+1];
        }
    }


}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   // ll t;
   // cin>> t;
   // while (t--)
   // {
        solve();
   // }

    return 0;
}
