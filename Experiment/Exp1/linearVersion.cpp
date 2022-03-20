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

//bool arrList::output(int s, int m){
//    s--;
//    int count = 0;    //记录已经出去了几个人
//    int total = maxsize;    //现有总人数
//    for (int i = 0; i < maxsize; i++){
//        cout<<arr[s];
//        for (int j = s; j < total - s; j++){
//            arr[j] = arr[j+1];    //后续元素往前补一位
//            count++;
//            total--;
//        }
//        s = (s + m - 1) %total;
//    }
//}

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
    s = (s + m) % 10 - 1;        //s=6
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