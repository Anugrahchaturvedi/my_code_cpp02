#include<bits/stdc++.h>
using namespace std ;

long long fact(int n); 
  
long long nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
   
long long fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
}
int main()
{

	 ios_base::sync_with_stdio(false);
	int t ;
	cin >> t ;
	while (t--)
	{
		int l , r;
		cin >> l >> r ;
		long long int n = r-l+1;

		 if (l==r)
           cout << "1" <<endl ;
      else 
        {
        	cout <<  n+ nCr(n,2) << endl;
        }
	}
}