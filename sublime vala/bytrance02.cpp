#include<bits/stdc++.h>
using namespace std ;
int main()
{ 
	int t ; 
	cin >> t ;
	while (t--)
	{    unordered_map<int , char >m;
		int n ;
		char s='a';
		long long int k ;
		cin >> n >> k;
		int a[27];
		for (int i =0 ;i<26 ;i++)
		{
			a[i]=pow(2,i);
        }
        for (int i =0 ; i< 26 ; i++)
        {
        	m[a[i]]=char (i+s);
        	}
        	
	}
	return 0 ;
}