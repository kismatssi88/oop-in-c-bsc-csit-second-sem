#include<iostream>
using namespace std;
struct person
{
    string name;
    int age;
    float height;
};
int main ()
{
    person p;
    cin >> p.name >> p.age >> p.height;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;   
    cout << "Height: " << p.height << endl;
    return 0;
}