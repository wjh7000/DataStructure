#include <iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
    Node(){
        this->value = 0;
        this->next = NULL;
    }
};


int main(){
    int n, s, m;
    cin>>n>>s>>m;
    Node *head, *current;
    head->next = head;
    current = head;
    for (int i = 0; i < n; i++){
        current->value = i + 1;
        current->next = new Node();
        current = current->next;
        current->next = head;
    }
}