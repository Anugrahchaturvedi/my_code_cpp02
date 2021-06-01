#include<bits/stdc++.h>
using namespace std;

int rev(int a[], int size)
{
	int start=0;
	int end = size - 1;
	for (int i = 0; i < (size)/2; ++i , end--)
	 {
	 	int temp = a[i];
	 	a[i]= a[end];
	 	a[end]=temp;
	 } 
	 for (int i = 0; i < size; ++i)
	 {
	 	cout << a[i] <<" ";
	 }
	 return 0 ;
}
int main()
{
	int a[]={4,5,56,4,5,8};
	int size= sizeof(a)/sizeof(a[0]);
	rev(a,size);
}