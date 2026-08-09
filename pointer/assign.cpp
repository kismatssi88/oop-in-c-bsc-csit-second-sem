#include<iostream>
using namespace std;
int main() {
    int  num=10;
    int *ptr=&num;
    cout<<"Value of num is: "<<num<<endl;
    cout<<"Address of num is: "<<&num<<endl;
    cout<<"Value of ptr is: "<<*ptr<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;
    return 0;
}