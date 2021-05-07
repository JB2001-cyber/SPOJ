#include <iostream>
using namespace std;
int main()
{
    long a;
    bool flagPrime = true;
    long m;
    long n;
    long q;
    // cout << "Enter number of queries : ";
    cin >> q;
    int j = 0;
    while (j != q)
    {
        // cout << "Enter m : ";
        cin >> m;
        //Prime numbers only defined for positive numbers
        //1 is not prime number
        if (m <= 1)
            m = 2;

        // cout << "Enter n : ";
        cin >> n;

        for (long i = m; i <= n; i++)
        {
            a = i;
            if (a == 0)
                break;
            for (int i = 2; i <= 9; i++)
            {
                if (i != a) //Not divisible by every number from 2 to 9 except itself
                {
                    if (a % i == 0) //if divisible flagPrime will be set to false
                        // flagPrime = (flagPrime && false);
                        flagPrime = false;
                    else //if not divisible it will to AND with remainging flagPrime from 2 to 9
                        flagPrime = (flagPrime && true);
                }
            }
            if (flagPrime == true)
                cout << i << endl;
            //  << " : Prime number" << endl;
            flagPrime = true;
        }
        cout << endl;
        j++;
    }
}
