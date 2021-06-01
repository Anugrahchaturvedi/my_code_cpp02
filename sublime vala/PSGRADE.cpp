#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t ;
	cin >> t;
	while(t--)
	{
	  long long am,bm,cm,r,a,b,c;
	  cin>>am>>bm>>cm>>r>>a>>b>>c;


	  if(((a+b+c)>=r) && ((a>=am && b>=bm && c>=cm)))
	  {
            cout<<"yes"<<endl;
	  }
	  else cout <<"no"<<endl;
	  	

	}
}