#include <iostream> 
using namespace std; 
int main() {
cout << "OPERATORS THAT CANNOT BE OVERLOADED\n"; 
cout << "===================================\n\n";
cout << "1. Scope resolution :: -> works on NAMES at compile time, not on values.\n"; 
cout << "2. sizeof	-> computed by compiler at compile time, size is fixed.\n";
 cout << "3. Ternary ?:	-> controls flow of execution, not a value operation.\n"; 
 cout << "4. Member access . -> must keep original meaning to reach class members.\n";
 cout << "5. Member pointer .* -> same reason as the dot operator.\n";
return 0;
}
