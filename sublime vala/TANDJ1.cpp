#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;
		 long long min=0;
	 min =abs(c-a)+abs(b-d);
	 if(min>k)
	 {
	 	cout << "NO"<<endl;
	 	
	 }
	 else if (min==k)
	 {
	 	cout<<"YES"<<endl;
	 }
       else if ((k-min)%2==0)
       {
       	cout<<"YES"<<endl;
       }
       else{
       	cout<<"NO"<<endl;
       }
}}
