#include <iostream>
using namespace std;

template <typename T>
struct __ListNode{
    T _data;
    struct __ListNode<T>* _pre;
    struct __ListNode<T>* _next;

    __ListNode(T data)
        :_data(data)
         ,_next(NULL)
         ,_pre(NULL)
    {}

}

template <typename T>
class List{
    typedef __ListNode<T> Node;
public:
    List()
    {
        InitHead(_pHead);
    }


    List(size_t n, const T& value)
    {
        InitHead(_pHead);
        while(n--)
        {
            Node* tail = _head->_pre;
            Node* cur = new Node(value);
            tail->_next = cur;
            cur->_pre = tali;
            cur->_next = _head;
        }

    }

private:
    void InitHead(Node*& pHead)
    {
        pHead->_next = pHead;
        pHead->_pre = pHead;
    }



protected:
    Node* _head;
}
