#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define nitro {std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);}
#define pi 3.141592653589793
#define mod 1000000007
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define debug(x) cout<<#x": "<<(x)<<endl;
#define case_g(x) cout<<"Case "<<x<<": ";
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef unsigned long ul;
typedef std::vector<int> vi;
typedef std::vector<ll> vl;
typedef std::vector<bool> vb;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll> pll;
typedef std::pair<int, bool> pib;
typedef std::vector<pii> vii;
typedef std::vector<pll> vll;
typedef std::vector<pib> vib;
typedef std::unordered_map<int, int> umapii;
typedef std::unordered_map<ll, ll> umapll;
typedef std::unordered_map<int , bool> umapib;
typedef std::map<int, int> mapii;
typedef std::map<ll, ll> mapll;
typedef std::map<int, bool> mapib;


int main()
{  
	int t ;
	cin >> t ;
	while (t--)
	{   ll sum =0 ;
		string s ;
		cin >>s ;
		int arr[27];
		for (int i = 0 ;i<26 ; i++)
		{
			arr[i]= (100*(i+1));
		}
		int p = arr[s[0]-'a'];
		sum = p + (s[0]-'a');
		for (int i =0 ; i<s.size(); i++)
		{
			sum += ((s[i]-'a')+p);
		}
		cout << sum <<endl;
	}
	return 0 ;
}