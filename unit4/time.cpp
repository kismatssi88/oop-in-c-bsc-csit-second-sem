#include <iostream>
 using namespace std;
  class Time {
int hours, minutes; 
public:
void input(){
    cout<<"enter hours and minutes:";
    cin>>hours>>minutes;
}

  Time operator+(Time t) {
Time temp;
int total = minutes + t.minutes;
 temp.minutes = total % 60;
temp.hours = hours + t.hours + total / 60; 
return temp;
}
void display() 
{ cout << hours << " hr " << minutes << " min" << endl; }
};
int main() {
Time t1, t2, t3;
cout<<"enter first time ";
t1.input();
cout<<"enter second time";
t2.input();
t3 = t1 + t2;
cout << "Time 1: "; t1.display(); 
cout << "Time 2: "; t2.display(); 
cout << "Sum : "; t3.display(); 
return 0;
}
