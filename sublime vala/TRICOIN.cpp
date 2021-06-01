#include<bits/stdc++.h>
using namespace std;
int main()

{     int n ;
		 cin>> n;
	  int sum[n]={0};
	  sum[0]=0;		
		 for(int i =1; i<=n ; i++)
		 {
              sum[i]=sum[i-1]+i;
		 }
		 int q;
		 cin >>q;
		 while(q--)
		 {
		 	int x ; 
		 	cin >>x;
		 	cout << sum[x] << endl;
		 }


}