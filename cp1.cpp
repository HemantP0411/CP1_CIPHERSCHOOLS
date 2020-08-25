#include<bits/stdc++.h>
using namespace std;
main()
{
	set<int> a;
	int a1,n;
	cin>>n;
	while(n--)
	{
		cin>>a1;
		a.insert(a1);
	}
	set<int>::iterator i,j;
	for (i = a.begin(); i != a.end(); ++i) 
    { 
        j=i;
        j++;
        if(j==a.end())
        {
        	--j;
        	break;
		}
    } 
	if(a.size()>1)
	cout<<*j;
	else
	return  -1;
	return 0;
}
