#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ;
	cin >> t ;
	while (t--)
	{
		long long n ,x;
		cin >> n >>x ;
		long long  s[n],r[n];
		vector<int>a ;
		for (int i=0 ; i<n ; i++)
		{
            cin >> s[i]>>r[i];
            if ((s[i]==x)|| s[i]<x)
            {
                a.push_back(r[i]);
            }

		}
		cout << *max_element(a.begin(), a.end())<<endl;
	}
}

