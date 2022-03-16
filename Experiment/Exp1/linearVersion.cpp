#include <iostream>
using namespace std;

class arrList{
public:
    int maxsize;
    int* arr;
    

    arrList(const int maxsize){
        this->maxsize = maxsize;
        arr = new int [maxsize];
        for(int i = 0; i < maxsize; i++){
            arr[i] = i + 1;
        }
    }
    ~arrList(){
        delete[] arr;
    }

    bool output(int &s, int &m);
};

bool arrList::output(int &s, int &m){
    s--;
    int count = 0;    //记录已经出去了几个人
    int total = maxsize;    //现有总人数
    for (int i = 0; i < maxsize; i++){
        cout<<arr[s];
        for (int j = s; j < total - s; j++){
            arr[j] = arr[j+1];    //后续元素往前补一位
            count++;
            total--;
        }
        s = (s + m - 1) %total;
    }
}

int main(){
    int n, s, m;
    cin>>n;
    arrList newList(n);
    newList.output(s, m);
}