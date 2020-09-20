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
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
        while(fast&&fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) return true;
        }
        return false;
    }
};
int main()
{
    ListNode *l,*a,*b,*c;
    Solution solution;
    l=new ListNode(3);
    a=new ListNode(2);
    b=new ListNode(0);
    c=new ListNode(4);
    l->next=a;
    a->next=b;
    b->next=c;
    cout<<boolalpha<<solution.hasCycle(l)<<endl;
    system("pause");
    return 0;
}
