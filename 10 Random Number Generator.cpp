//Display 10 random numbers using the time function of the system
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
int main( )
{
    int r;

       srand(time(0));

    for (int i = 0; i < 10; i++)
        {
        r = rand();
        cout << "The number is " << r << endl;
        }
    return 0;
}
