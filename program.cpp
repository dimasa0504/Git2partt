#include <iostream>
#include <funcs.h>

using namespace std;

int main()
{
    double x1, x2; // x1 и x2 это слагаемые\множители
    char symbol; // символ, отвечающий за операцию
    cin >> x1 >> symbol >> x2;
    //feature сделать проверку символа
    switch(symbol)
    {
    case '+':
        cout << x1 << ' ' << symbol << ' ' << x2 << " = " << MySum(x1, x2);
        break;

    case '-':
        cout<<x1<<symbol<<x2<<"="<<MySub(x1,x2);
        break;

    case '/':
        cout<<x1<<"/"<<x2<<"="<<MyDiv(x1,x2);
        break;

    case '*':
        cout << x1 << ' ' << symbol << ' ' << x2 << " = " << MyMul(x1, x2);
        break;
    }
}
