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
    void deleteNode(ListNode* node) {
        ListNode *delnode = node->next;
        //因为是指针和结构体来表示链表,因此node和之前节点的next指向了内存中的同一地址,所以只要对这个地址做修改,上一个节点的next也同时被修改了
       *node=*delnode;
       // node->next=delnode->next;
        free(delnode);
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
    ListNode *l,*a,*b,*c;
    l=new ListNode(4);
    a=new ListNode(1);
    b=new ListNode(5);
    c=new ListNode(9);
    l->next=a;
    a->next=b;
    b->next=c;
    Solution solution;
    solution.display(l);
    solution.deleteNode(a);
    solution.display(l);
    system("pause");
    return 0;
}