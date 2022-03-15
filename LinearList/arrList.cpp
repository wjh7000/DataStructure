template <typename T>
class arrList
{
private:
    /* data */
    T *aList;    //数组aList
    int maxSize;    //表的最大长度
    int curLen;    //顺序表实例的当前长度
    int position;    //当前处理位置
public:
    arrList(const int size){    
        maxSize = size;
        aList = new T[maxSize];
        curLen = position = 0;
    }
    ~arrList(){
        delete[] aList;
    }

    //清空
    void clear(){
        delete[] aList;
        curLen = position = 0;
        aList = new T[maxSize];
    }

    //返回实际长度
    int length();

    bool append(const T value);    //在表尾附加元素值为value
    bool insert(const int p, const T value);    //在p处插入value
    bool del(const int p);    //删除p上元素
    bool setValue(const int p, const T value);    //把p处元素值改为value
    bool getValue(const int p, T &value);    //提取p处元素给value
    bool getPos(int &p, const T value);    //查找值为value的元素位置给p
};

