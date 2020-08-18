#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int *n1=new int[n];
    int *m1=new int[m];
    for(int i=0;i<n;i++)
    {
    	cin>>n1[i];
	}
	for(int i=0;i<m;i++)
    {
    	cin>>m1[i];
	}
	int c=0;
	reverse(n1,n1+n);
	reverse(m1,m1+m);
	if(n>=m)
	{
		int i;
		for(i=0;i<m;i++)
		{
			if(c==1)
			{
				n1[i]+=1;
			}
				n1[i]=n1[i]+m1[i];
			c=(n1[i])/10;
			n1[i]%=10;
		}
		if(c==1)
		{
			while(i<n)
			{
				n1[i]=n1[i]+c;
				c=(n1[i]+c)/10;
				n1[i]%=10;
				i++;
			}
		}
		reverse(n1,n1+n);
		for(int i=0;i<n;i++)
		{
			cout<<n1[i]<<" ";
		}
	}
	else
	{
		int i;
		for(i=0;i<n;i++)
		{
			if(c==1)
			{
				m1[i]+=1;
			}
				m1[i]=m1[i]+n1[i];
			c=(m1[i])/10;
			m1[i]%=10;
		}
		if(c==1)
		{
			while(i<m)
			{
				m1[i]=m1[i]+c;
				c=(m1[i]+c)/10;
				m1[i]%=10;
				i++;
			}
		}
		reverse(m1,m1+m);
		for(int i=0;i<m;i++)
		{
			cout<<m1[i]<<" ";
		}
	}
}
