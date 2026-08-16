#include<iostream>
using namespace std;
int main()
{
    int num=50;
    int *ptr=&num;
    cout<<"Value of num: "<<num<<endl;
    cout<<"value using pointer: "<<*ptr<<endl;
    return 0;
}