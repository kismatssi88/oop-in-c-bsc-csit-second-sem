#include<iostream>
using namespace std;
inline int square(int a){
    return a*a;
}
int main()
{
    int x=5;
    cout<<"Square of is "<<square(x)<<endl;
    return 0;
}