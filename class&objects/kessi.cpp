#include<iostream>
using namespace std;
class student{
    public:
     int rollno;
    string name;
    int age;
      void display(){
        cout<<"Roll No: "<<rollno<<endl;
        cout <<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;

      }
}
int main(){
    student s;
    s.rollno=63;
    s.name="kesav";
    s.age=20;
    s.display();
    return 0;
}