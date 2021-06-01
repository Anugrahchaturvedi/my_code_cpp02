#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int power(ll x, unsigned int y , ll m)
{
    int res = 1;
    x=x%m;
    if(x==0) return 0;
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x)%m;
 
        // n must be even now
        y = y >> 1; // y = y/2
        x = (x * x)%m; // Change x to x^2
    }
    return res;
}
int main()
{
	ll t;
	cin >>t;
	while(t--)
	{
		ll n ;
		cin >>n ;
	  cout <<power(2,n-1,mod)<<endl;
	 
        
	}
}