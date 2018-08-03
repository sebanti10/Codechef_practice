#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int G;
		cin>>G;
		while(G--)
		{
			int I,Q;
			ll N;
			cin>>I>>N>>Q;
			//I=1 is H i.e. 1
			//I=2 is T i.e. 0
			if(N%2)
			{
				if(Q==I)
					cout<<(N/2)<<endl;
				else
					cout<<(N/2)+1<<endl;
			}
			else
				cout<<(N/2)<<endl;
		}
	}
}
