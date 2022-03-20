#include <iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node* pre;
    Node(int value){
        this->value = value;
        this->next = this;
        this->pre = this;
    }
    Node(){
        this->value = 0;
        this->next = this;
        this->pre = this;
    }
};


int main(){
    int n, s, m;
    cin>>n>>s>>m;
    Node *head, *current, *temp;
    head = new Node();
    head->next = head;
    head->pre = head;

    current = head;
    current->value = 1;
    //建立链表
    for (int i = 2; i <= 10; i++){
        current->next = new Node();
        current->next->pre = current;
        current = current->next;
        current->next = head;
        current->value = i;
    }

    //输出
    current = head;
    for (int i = 0; i < s - 1; i++){
        current = current->next;
    }
    while (current->next != current){
        //往后m-1个
        for (int i = 0; i < m - 1; i++){
            current = current->next;
        }
        //输出curr,并删除该节点
        cout<<current->value<<endl;
        current->pre->next = current->next;
        current->next->pre = current->pre;
        temp = current;
        current = current->next;
        delete(temp);
    }
    cout<<current->value;
    return 0;

}