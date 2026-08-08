#include<iostream>
using namespace std;
int mul(int a, int b){
    return a*b;
}
float mul(float a, float b){
    return a*b;
}
int main()
{
    int x=5, y=10;
    float c=5.5, d=10.5;
    cout<<"Multiplication of integers: "<<mul(x,y)<<endl;
    cout<<"Multiplication of floats: "<<mul(c,d)<<endl;
    return 0;
}