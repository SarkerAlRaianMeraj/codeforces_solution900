//B. MKnez's ConstructiveForces Task


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
    ll n;
    cin>>n;
    if(n==3)cout<<"NO"<<endl;
    else if(n%2==0)
    {
        cout<< "YES"<<endl;
        for(ll i=0;i<n/2;i++)
        {
            cout<<1<< " "<<-1<<" ";
        }cout<<endl;
    }
    else
    {
        cout<< "YES"<<endl;
         for(ll i=0;i<n/2;i++)
         {
             cout<<3-n<< " "<<n-1<< " ";
         }cout<<3-n;

    }cout<<endl;


}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     ll t;
     cin>> t;
     while (t--)
     {
    solve();
     }

    return 0;
}
