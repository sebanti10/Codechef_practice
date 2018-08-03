#Uncle Johny Problem Code: JOHNY

#include<bits/stdc++.h>
using namespace std;
int binary_search(long long uncle,long long a[],int N)
{
	int low=0,up=N-1,mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(a[mid]==uncle)
			return mid;
		else if(a[mid]>uncle)
			up=mid-1;
		else
			low=mid+1;			
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,i,K;
		cin>>N;
		long long a[N],uncle;
		for(i=0;i<N;i++)
			cin>>a[i];
		cin>>K;
		uncle=a[K-1];
		sort(a,a+N);
		cout<<(binary_search(uncle,a,N)+1)<<endl;		
	}
}
 
