#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	if(n==1)
		return false;
	for(int i=2;i<=(int)sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int D,P,i,j,p,t=1;
	cin>>D>>P;
	p=D/P;
	int time[p][P];
	for(i=0;i<P;i++)
	{
		for(j=0;j<p;j++)
		{
			time[j][i]=t++;
		}
	}
	t=0;
	for(i=0;i<p;i++)
	{
		bool flag=true;
		for(j=0;j<P;j++)
		{
			if(!isprime(time[i][j]))
			{
				flag=false;
				break;
			}
		}
		if(flag)
			t++;
	}
	cout<<t;
}
