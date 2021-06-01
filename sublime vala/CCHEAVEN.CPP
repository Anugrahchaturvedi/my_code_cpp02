#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 int t ;
 cin>> t;
 while(t--)
 {
  int l;
  cin >> l ;
  string s;
  cin>>s;
  int flag=0;
  int c1=0;
  int c0=0;
  for (int i=0 ; i<l ; i++)
  {
  	if (s[i]=='0')
  		c0++;
  	else
  	c1++;

  if (c1>=c0)
  	{flag=1;
	  break;}
}


  if(flag==0)
  	
  	cout << "no" <<endl;
  else 
  	cout << "yes" <<endl;
 }
}
