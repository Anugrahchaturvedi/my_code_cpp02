#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,o,c,l;
	cin >>r>>o>>c ;
	l= (20-o);
	l= l*36;
	c=c+l;
	if (c>r)
	{
		cout << "YES"<<endl;
	}
	else 
		cout << "NO"<<endl;

	}