#include<bits/stdc++.h>
using namespace std;

int neg(int arr[] , int n )
{  
    int j =0 ;
   for (int i =0 ; i<n ; i++)
   {
       if ( arr[i]<0)
       {
           if (i!=j){
        swap(arr[i], arr[j]);
        j++;}

       }
   }
}

void print (int arr[], int n)
{
    for(int i=0; i<n ; i++)
    cout << arr[i] <<" ";
}
int main()
{
	int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int size= sizeof(a)/sizeof(a[0]);
	neg(a,size);
    print(a,size);
}