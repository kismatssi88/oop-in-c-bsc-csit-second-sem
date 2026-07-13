#include<iostream>  
using namespace std;
class student{
    public:
    int rollno;
    string name;

};
int main (){
    student s1,s2;
    cout<<"size of s1: "<<sizeof(s1)<<endl;
    cout<<"size of s2: "<<sizeof(s2)<<endl;
    return 0;
}