#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t ;
	cin>>t;
	while (t--)
	{
		char a[3][3];
		int Cntx=0,Cnto=0,Cnt_=0,winx=0,wino=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++){
				cin>>a[i][j];
			    if(a[i][j]=='X') Cntx++;
			    else if (a[i][j]=='O') Cnto++;
			    else if (a[i][j]=='_') Cnt_++;
		}
	}
	for(int i=0; i<3 ;i++)
	{
		if(a[i][0]==a[i][1] and a[i][2]==a[i][1]){
			if(a[i][0]=='X')winx++;
			else if (a[i][0]=='O')wino++;
		}
	}
		

		for(int i=0; i<3 ;i++)
	{
		if(a[0][i]==a[1][i] and a[2][i]==a[1][i]){
			if(a[0][i]=='X')winx++;
			else if (a[0][i]=='O')wino++;
		}
	}


	if(a[0][0]==a[1][1] and a[2][2]==a[1][1]){
        if(a[1][1]=='X') winx++;
        else if (a[2][2]=='O') wino++;
    }
	
     if (a[0][2]==a[1][1] and a[2][0]==a[1][1])
     {
     	if (a[1][1]=='X')winx++;
     	else if (a[2][2]=='O') wino++;
     }

if (Cnto>Cntx) cout <<3<<endl;
else if ((Cntx-Cnto) >1 ) cout <<3<<endl;
else if ((Cntx>Cnto) and winx==1 and wino==0) cout <<1<<endl;
else if ((Cntx==Cnto) and winx==1 and wino==0) cout <<1<<endl;
else if (Cnt_==0 and (winx+wino==0)) cout <<1<<endl;
else if (Cnt_==0 and winx==2)cout << 1 <<endl;
else if (Cnt_>0 and (winx+wino==0)) cout <<2<<endl;
else cout << 3 <<endl;


}}