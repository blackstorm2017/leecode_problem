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

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    //合并两个有序链表，并返回合并后的有序链表指针
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //声明指针p指向l1，指针q指向l2，指针r指向合并后的链表l
        ListNode *p=l1,*q=l2,*l=new ListNode(0),*r=l; 
        while(p||q)
        {
            //如果l2遍历结束或者p指向的元素小于q指向的元素，将p指向的元素放入合并列表，同时p指向l1的下一个值
            if(p&&((q==NULL)||((p->val<q->val))))
            {
                r->next=p;
                p=p->next;
            }
            else
            {
                r->next=q;
                q=q->next;
            }
            r=r->next;
        }
        return l->next;
    }
    //遍历并打印链表
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
    ListNode *l1,*l2,*a,*b,*c,*d;
    Solution solution;
    //新建链表l1
    l1=new ListNode(1);
    a=new ListNode(2);
    b=new ListNode(4);
    l1->next=a;
    a->next=b;
    //新建链表l2
    l2=new ListNode(1);
    c=new ListNode(3);
    d=new ListNode(4);
    l2->next=c;
    c->next=d;
    cout<<"display elements of l1:"<<endl;
    solution.display(l1);
    cout<<"display elements of l2:"<<endl;
    solution.display(l2);
    cout<<"display element of merge l1 and l2:"<<endl;
    solution.display(solution.mergeTwoLists(l1,l2));
    system("pause");
    return 0;
}
