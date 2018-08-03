#Cleaning Up Problem Code: CLEANUP


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,i,pos;
		cin>>n>>m;
		int total[n],finished[n-m];
		for(i=1;i<=n;i++)
			total[i]=1;
		for(i=1;i<=m;i++)
		{
			int k;
			cin>>k;
			total[k]=0;
		}
		
		int p=n-m,q=1;
		
		for(i=1;i<=n;i++)
		{
			if(total[i]==1)
				finished[q++]=i;
		}
		
		
		for(i=1;i<=p;i++)
		{
			if(i%2)
				cout<<finished[i]<<" ";
		}
		cout<<endl;
		for(i=1;i<=p;i++)
		{
			if(i%2==0)
				cout<<finished[i]<<" ";
		}
		cout<<endl;
	}
}
 
