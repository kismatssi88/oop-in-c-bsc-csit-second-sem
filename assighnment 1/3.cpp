//default argument
#include<iostream>
using namespace std;
int volume(int l,int b=5,int h=10){
    return l*b*h;
}
int main()
{
    int length=5;
    cout<<"Volume is "<<volume(length)<<endl;
    return 0;
}