// Matrix Console
/*


*/
#include <cstdlib>
#include <iostream>
#include <ctime>   // for time()
#include <windows.h>

bool RANDOM();
void display(int);

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    std::srand(std::time(0));    //  random initializing of rand()
    display(x);

    cout << endl << endl << endl;
    system("PAUSE");      //cin.get will accomplish the same thing and keep things portable
    return EXIT_SUCCESS;
}

bool RANDOM()
{
     return (std::rand() % 2);
}

void display(int x)
{
     for(long i = 0; i > -1; i++)   //infinite loop
    {
         cout << RANDOM() << RANDOM() << RANDOM() << RANDOM() << RANDOM() << RANDOM() << RANDOM() << RANDOM();
              //<< endl;
    }
    
}
