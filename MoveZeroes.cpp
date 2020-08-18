#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
	int f=0;
	for(int i=0;i<nums.size();i++)
	{
		if(nums[i]!=0)
		{	
			nums[f++]=nums[i];
		}
	}
	for(int i=f;i<nums.size();i++)
	{
		nums[i]=0;
	}
}
    
int main()
{
	vector<int> vec;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		vec.push_back(x);
	}
	moveZeroes(vec);
	for(int i=0;i<n;i++)
	{
		cout<<vec[i]<<" ";
	}
	return 0;
}
