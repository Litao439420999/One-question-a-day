//设计一个链表类，实现六个接口：
//获取链表的第index个节点的数值
//在链表的最前面插入一个节点
//在链表的最后面插入一个节点
//在链表的第index个节点前面插入一个节点
//删除链表的第index个节点前面插入一个节点
//打印当前链表。
//注意：index是从0开始的，第0个节点就是头节点。


#include <iostream>
using namespace std;
// 定义链表节点的结构体
struct LinkedNode
{
    int val;
    LinkedNode *next;
    LinkedNode(int val):val(val),next(nullptr){}
};
class MyLinkedList
{
    public:
     //初始化链表
     MyLinkedList()
     {
         //这里定义的头结点是一个虚拟头节点，而不是真正的链表头节点
         _dummyHead = new LinkedNode(0);
         _size = 0;
     }

     //获取第index个节点的数值，如果index是非法数值则直接返回-1
     //注意index是从0开始的，第0个节点就是头结点
     int get(int index)
     {
         if(index > (_size - 1) || index < 0)
            return -1;
        
        LinkedNode *cur = _dummyHead->next;
        while(index--)
        {
            //如果写成--index就会陷入死循环
            cur = cur->next;
        }
        return cur->val;

     } 

     //在链表最前面插入一个节点，插入完成后，新插入的节点为链表新的头节点
     void addAtHead(int val)
     {
         LinkedNode *newNode = new LinkedNode(val);
         newNode->next = _dummyHead->next;
         _dummyHead->next = newNode;
         _size++;
     }  

     //在链表最后面添加一个节点
     void  addAtTail(int val)
     {
         LinkedNode *newNode = new LinkedNode(val);
         LinkedNode *cur = _dummyHead;
         while(cur->next != nullptr)
         {
             cur = cur->next;
         }
         cur->next = newNode;
         _size++;
     }

     //在第index个节点之前插入一个新节点
     //如果index为0,那么新插入的节点为链表新的头节点
     //如果index等于链表的长度，则说明新插入的节点为链表的尾节点
     //如果index大于链表的长度，则返回空

     void addAtIndex(int index, int val)
     {
         if (index > _size)
            return ;
        
        LinkedNode *newNode = new LinkedNode(val);
        LinkedNode *cur = _dummyHead;

        while(index--)
            cur = cur->next;

        newNode->next = cur->next;
        cur->next  = newNode;
        _size++;
     }

     // 删除第index个节点，如果index大于或等于链表的长度，则直接返回
     //注意index是从0开始的
     void  deleteAtIndex(int index)
     {
         if ( index >= _size || index < 0)
            return ;
        LinkedNode *cur = _dummyHead;
        while(index--)
            cur = cur->next;
        
        LinkedNode  *tmp   = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        _size--;
     }

     //打印链表
     void   printLinkedList()
     {
         LinkedNode *cur = _dummyHead;

         while(cur->next != nullptr)
         {
             cout << cur->next->val << "  ";
             cur = cur->next;
         }

         cout<<endl;

     }
    
    
    private:
        int _size;
        LinkedNode *_dummyHead;    

};

int main(void)
{
    MyLinkedList *mylinkedList = new MyLinkedList();
    mylinkedList->addAtHead(3);
    mylinkedList->addAtTail(1);
    mylinkedList->addAtHead(2);
    mylinkedList->printLinkedList();

    mylinkedList->addAtIndex(1,4);
    mylinkedList->printLinkedList();

    cout<< mylinkedList->get(1)<<endl;
    mylinkedList->deleteAtIndex(2);
    cout<<mylinkedList->get(2)<<endl;

    return 0;
}