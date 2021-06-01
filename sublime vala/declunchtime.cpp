#include<bits/stdc++.h>
using namespace std ;
int main()
{
	long long int t , n , k;
	int sum =0 , arr[n];
	//cin >> t ;
	//while (t--)
	//{   

		cin >> n >>k;
		//cin >>k;
		for (int i =0 ; i< n ;i++)
		{
			cin >>arr[i];
		}
		for (int i=0; i< n ; i++)
		{
			sum=sum + arr[i];
		}
		cout << "sum id "<<sum << endl;
	//}
	return 0;
}