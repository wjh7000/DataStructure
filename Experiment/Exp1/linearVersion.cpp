//测试样例
//n, s, m
//2 1 3  ---- 1 2
//2 2 3  ---- 2 1
//1 1 3  ---- 1
//10 5 3 ---- 7 10 3 6 1 5 2 9 4 8
//4 5 8  ---- 4 2 1 3

#include <iostream>

using namespace std;

class arrList {
public:
    int maxsize;
    int *arr;


    arrList(const int maxsize) {
        this->maxsize = maxsize;
        arr = new int[maxsize];
        for (int i = 0; i < maxsize; i++) {
            arr[i] = i + 1;
        }
        //cout<<arr[9];
    }

    ~arrList() {
        delete[] arr;
    }

    bool output(int s, int m);
};


int main() {
    int n, s, m;    //n为开始总人数，s为开始报数的位置，m为数m个人
    int total;      //目前剩下的总人数
    int flag;
    int count;
    cin >> n >> s >> m;
    arrList newList(n);
    s--;            //数组从0开始
    total = n;      //初始化total
    //测试 10，5，3
    //答案7,10,3,6,1,5,2,9,4,8
    s = (s + m) % n - 1;        //s=6
    if (s == -1){
        s = n - 1;
    }
    while (total > 0) {
        cout << newList.arr[s] << endl;
        total--;
        if (total == 0)
            break;
        newList.arr[s] = -1;
        count = m;
        while (count > 0) {
            s = (s + 1) % n;
            if (newList.arr[s] != -1) {
                count--;
            }
        }
    }
    return 0;
}
