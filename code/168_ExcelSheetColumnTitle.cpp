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
    string convertToTitle(int n) {
        string res;
        while(n!=0)
        {
            n-=1;
            res.push_back(n%26+'A');
            n/=26;
        }
        reverse(res.begin(),res.end());
        
        return res;
    }
};
int main()
{
    int n;
    cin>>n;
    Solution solution;
    cout<<solution.convertToTitle(n)<<endl;
    system("pause");
    return 0;
}
