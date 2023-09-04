//06_Operator
//sizeof Operator
/* 
    This Operator in C++ is evaluated at compile time.
    Returns number of bytes of a data type.
    Can be used with variables and literals.
 */

#include <iostream>
using namespace std;
int main()
{
    cout << "\033c";
    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(double)<<endl;

    int x = 10;
    cout<<sizeof(x = 51)<<endl;
    cout<<x<<endl;
    //Value of x does not change since it was evaluated at compile time.
    return 0;
}