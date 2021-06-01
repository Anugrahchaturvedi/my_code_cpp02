#include<bits/stdc++.h>
using namespace std ;
int main()
{

	int t ,n,s1=0,s2=0,p1=0,p2=0;
	string s , p;
	cin >> t ;
	while (t--)
	{
      cin >>n ;
      cin>>s ;
      cin >>p;
      for (int i =0 ; i< n ;i++)
      {
      	if (s[i]=='0')
      		s1++;
      		else if (s[i]=='1')
      		s2++;
      	else if (p[i]=='0')
      		p1++;
      	else if (p[i]=='1')
      		p2++;
      }
      if ((s1==p1) && (s2==p2))
      {
      	cout << "Yes"<<endl;

      }
      else 
      	cout << "No"<<endl;
	}
	return 0;
}