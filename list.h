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

};

template <typename T>
class List{
    typedef __ListNode<T> Node;
public:
    List()
    {
        InitHead(_head);
    }


    List(size_t n, const T& value)
    {
        InitHead(_head);
        while(n--)
        {
            Node* tail = _head->_pre;
            Node* cur = new Node(value);
            tail->_next = cur;
            cur->_pre = tail;
            cur->_next = _head;
        }
    }



    ~List()
    {
        while(_head->_next != _head)
        {

        }
    }

private:
    void InitHead(Node*& head)
    {
        head->_next = head;
        head->_pre = head;
    }



protected:
    Node* _head;
};
