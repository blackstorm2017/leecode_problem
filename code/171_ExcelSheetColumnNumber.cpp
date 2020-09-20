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
    int titleToNumber(string s) {
        long long ans=0;
        for (int i = 0; i < s.length(); i++)
        {
            ans=ans*26+s[i]-'A'+1;
            if(ans>INT_MAX) return INT_MAX;
        }
        return ans;
    }
};
int main()
{
    Solution solution;
    string s;
    cin>>s;
    cout<<solution.titleToNumber(s)<<endl;
    system("pause");
    return 0;
}
