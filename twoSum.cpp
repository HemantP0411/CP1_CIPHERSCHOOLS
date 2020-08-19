#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == target - nums[i]) {
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
    }
    return v;
    }

int main()
{
	int arr[]={3,2,4};
	vector<int> v(arr,arr+3),x;
	x=twoSum(v,6);
	for(int i=0;i<x.size();i++)
	{
		cout<<x[i]<<endl;
	}
}

