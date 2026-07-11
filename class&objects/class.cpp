#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    int age;
    string sub;
   void setsub(string subjects){
     sub=subjects;
   }


};
int main(){
    student s;
    s.rollno=63;
    s.name="kesav";
    s.age=20;
    s.sub="Maths";
    cout<<"Roll No: "<<s.rollno<<endl;
    cout<<"Name: "<<s.name<<endl;   
    cout<<"Age: "<<s.age<<endl; 
    cout<<"Subject: "<<s.sub<<endl;
    return 0;
}
