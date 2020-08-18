#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin>>n;
    int c=n.length();
    int res=0;
    for(int i=0;i<n.length();i++,c--)
    {
    	if(n[c-1]=='1')
    	{
    		res+=pow(2,i);
		}
	}
	cout<<res;
}
