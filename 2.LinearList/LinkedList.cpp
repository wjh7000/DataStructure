//节点类
template <typename T>
class Node{
public:
    T data;
    Node<T> *next;
    
    Node(const T data, const Link<T> *next = NULL){
        this->data = data;
        this->next = next;
    }
};

//链表类
template <typename T>
class LinkedList{
private:
    Node<T> *head, *tail;
public:
    LinkedList();
    ~LinkedList();

    bool isEmpty();    //判空
    void clear();
    int length();
    bool append(const T value);    //在表尾附加元素值为value
    bool insert(const int p, const T value);    //在p处插入value
    bool del(const int p);    //删除p上元素
    bool setValue(const int p, const T value);    //把p处元素值改为value
    bool getValue(const int p, T &value);    //提取p处元素给value
    bool getPos(int &p, const T value);    //查找值为value的元素位置给p
};
