#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int id;
};
int main()
{
    student s;
    cin >> s.name >> s.age >> s.id;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "ID: " << s.id << endl;
    return 0;
} 