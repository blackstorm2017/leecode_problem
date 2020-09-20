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
//给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p=head,*q;
        while(p&&p->next)
        {
            if(p->val==p->next->val)
            {
                q=p->next;
                p->next=q->next;
                free(q);
            }
            else p=p->next;
        }
        return head;
    }
    void display(ListNode *l)
    {
        ListNode *p=l;
        while(p)
        {
            cout<<p->val<<" ";
            p=p->next;
        }
        cout<<endl;
    }
};
int main()
{
    ListNode *l,*a,*b,*c,*d;
    l=new ListNode(1);
    a=new ListNode(1);
    b=new ListNode(2);
    c=new ListNode(3);
    d=new ListNode(3);
    l->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    Solution solution;
    solution.display(l);
    solution.deleteDuplicates(l);
    solution.display(l);
    system("pause");
    return 0;
}
