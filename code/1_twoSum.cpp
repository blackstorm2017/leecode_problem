#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cmath>
#include<cctype>
#include<map>
#include<unordered_map>
using namespace std;
const int maxn=1010;
//使用哈希表解决问题


//vetcor 头文件 vector
//unordered_map 头文件 unordered_map 
class Solution {
public:
	   vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int,int> hash_table;
		//vector<int> ans;
		
		for(int i=0;i<nums.size();i++)
		{
			int temp=target-nums[i];
			if(hash_table.count(temp))
			//<=>if(hash_table.find(temp)!=hash_table.end()) 
			{
//				ans.push_back(i);
//				ans.push_back(hash_table[temp]);
//				break;
				return {i,hash_table[temp]};
			}
			hash_table[nums[i]]=i;
		}
		//return ans;
		return {};
    }
	
};


int main()
{
	Solution solution;
	vector<int> nums={2,7};
	int target=9;
	vector<int> ans=solution.twoSum(nums,target);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	system("pause");
    return 0;
}

