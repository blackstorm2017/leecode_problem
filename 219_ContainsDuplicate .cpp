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
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i])&&(abs(i-mp[nums[i]])<=k)) return true;
            mp[nums[i]]=i;
        }
        return false;
    }
};
int main()
{
    vector<int> test={1,2,3,1,2,3};
    int k=2;
    Solution solution;
    bool res=solution.containsNearbyDuplicate(test,k);
    cout<<res<<endl;
    system("pause");
    return 0;
}