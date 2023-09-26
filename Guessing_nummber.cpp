#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int rand_val ;
    int guess_val ;
    rand_val = rand() ;
    cout << " enter your guess : \n " ;
    cin >> guess_val ;
    while (rand_val != guess_val)
    {
        if (rand_val < guess_val)
        {
            cout << "ops! your value is larger than expected \n " ;
            cout << " enter your guess again : \n " ;
            cin >> guess_val ;
        }
        if (rand_val > guess_val)
        {
            cout << "ops! your value is smaller than expected \n " ;
            cout << " enter your guess again : \n " ;
            cin >> guess_val ;
        }
        if (rand_val == guess_val)
        {
            cout << "amazing ! your guessing is true \n the value is : " << guess_val ;
        }
    }
    return 0;
}

