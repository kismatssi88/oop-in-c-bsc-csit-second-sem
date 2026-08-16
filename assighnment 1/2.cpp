//inline function
#include <iostream>
using namespace std;
inline int square(int a)
{
    return a* a;
}
int main()
{
    cout << square(5) << endl;
    return 0;
}