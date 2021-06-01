#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[],int n );
	  int countDistinct(int arr[], int n)
{
    
    sort(arr, arr + n);
 
    
    int res = 0;
    for (int i = 0; i < n; i++) {
 
        
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;
 
        res++;
    }
 
    return res;
}

int main()
{



	int t ;
	cin >>t ;
	while (t--)
	{ 
		int n , m,arr[n];
		cin >>n >> m ;
		for (int  i =0 ; i<n ; i++)
		{
			cin>>arr[i];
		}
		int res = countDistinct(arr,n);
		
 



     if (res==m)
    {
    	cout << "NO"<<endl;
    }
    else if (res<m)
      cout << "YES"<<endl;
	}
}