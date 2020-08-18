#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	n--;
	bool flag=true;
	while(n!=-1&&flag)
	{
		if(arr[arr[n]]!=n )
		{
			flag=false;
		}
		n--;
	}
	if(n==-1)
	{
		cout<<1;
	}
	else
	cout<<0;
}
