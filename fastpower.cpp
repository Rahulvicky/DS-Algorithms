#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007

ll fastpower(ll x,ll y)
{
    ll temp=1;
    while(y>0)
    {
        if(y%2==1)
        {
            temp = x * temp%M;
        }
        x = x*x%M;
        y=y/2;
    }
    return temp;
    
}
int main(){
  long long int x,y;
  cin>>x>>y;
  cout<<fastpower(x,y);
}
