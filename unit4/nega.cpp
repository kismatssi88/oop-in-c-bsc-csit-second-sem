#include <iostream> 
using namespace std; 
class Number {
int value; 
public:
Number(int v = 0) 
{ value = v; }
Number operator-() {
    Number temp;	// unary minus -obj Number temp;
temp.value = -value; 
return temp;
}
void display()
 { cout << "Value = " << value << endl; }
};
int main() {
Number n1(25), n2; 
n2 = -n1;
cout << "Original: "; n1.display();
 cout << "Negated : "; n2.display(); 
 return 0;
}
