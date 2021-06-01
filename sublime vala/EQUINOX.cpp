#include<bits/stdc++.h>
using namespace std;
int main()
{

 long long  t ;
 cin>> t;
 while(t--)
 {
 	long long n , a ,b ;
 	cin >> n>>a>>b;
 	long long sa=0;
 	long  long  an=0;
 	 	for (long  i=0 ; i<n ; i++)
 	{
 		string s;
 		cin>>s;
if ((s[0]== 'E') || (s[0]== 'Q') || (s[0]=='U')||(s[0]=='I') || (s[0]=='N')||(s[0]=='O')||(s[0]=='X'))
 	
   { 
   	sa+=a;
   }
 	
 	else
 	{
 		an+=b;
 	}
 	
}

// cout << sa <<" " <<an <<endl;
   
   if (sa>an)
cout <<"SARTHAK" <<endl;
 if (an>sa)
	cout << "ANURADHA" <<endl;
if (sa==an)
  	cout <<"DRAW" <<endl;

}

}