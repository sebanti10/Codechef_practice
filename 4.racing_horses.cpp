#Racing Horses Problem Code: HORSES

//O(n)
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,i,j;
		cin>>N;
		long long a[N],diff,min;
		for(i=0;i<N;i++)
			cin>>a[i];
		sort(a,a+N);
		min=a[1]-a[0];
		for(i=0;i<N-1;i++)
		{
			diff=a[i+1]-a[i];
			if(diff<min)
				min=diff;
		}
		cout<<min<<endl;
	}
}





//O(n^2)
 
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,i,j;
		cin>>N;
		long long a[N],min,diff;
		for(i=0;i<N;i++)
			cin>>a[i];
		min=abs(a[0]-a[1]);
		for(i=0;i<N;i++)
		{
			for(j=i+1;j<N;j++)
			{
				diff=abs(a[i]-a[j]);
				if(diff<min)
					min=diff;					
			}
		}
		cout<<min<<endl;
	}
}*/
 

 
