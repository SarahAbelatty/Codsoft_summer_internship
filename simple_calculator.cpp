#include <iostream>

using namespace std;

int main()
{
    int operation = 4 ;
    int num1 , num2 ;
    cout << " enter  your two numbers : \n " ;
    cin >> num1 >> num2 ;
    cout << " if you want to add press      1 \n                sub press      2 \n                multiply press 3 \n                divide press   4 \n " ;
    cout << " enter your operation : \n " ;
    cin >> operation ;
    switch (operation)
    {
    case 1 :
        cout << num1 + num2 ;
        break ;
    case 2 :
        cout << num1 - num2 ;
        break ;
    case 3 :
        cout << num1 * num2 ;
        break ;
    case 4 :
        cout << num1 / num2 ;
        break ;
    }
    return 0;
}
