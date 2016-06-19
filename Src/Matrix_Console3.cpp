// Matrix Console
/*


*/
#include <cstdlib>
#include <iostream>
#include <ctime>   // for time()
#include <windows.h>

char RANDOM();
int ran_screen();
int ran_strlen();
void display(int, int);
void space(int);

const int SCREENSIZE = 95;
const int STRLENGTH = 15;

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    int factor = 1;  //probablility factor
    std::srand(std::time(0));    //  random initializing of rand()

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 778);
    
    for(long i = 1; i > 0; i++)    //infinite loop
    {   
        display(ran_screen(), ran_strlen());
        //Sleep(50);
    }
    
    cout << endl << endl << endl;
    system("PAUSE");      //cin.get() will accomplish the same thing and keep things portable
    return EXIT_SUCCESS;
}

char RANDOM()
{
     return (std::rand() % 100);   //Set to 256 for all char
}

int ran_screen()
{
     return (std::rand() % SCREENSIZE + 1);
}

int ran_strlen()
{
     return (std::rand() % STRLENGTH + 1);
}

void space(int x)
{
    for(long i = 0; i < x; i++)
    {
         cout << " ";
    }
}

void display(int x, int y)
{
    for(long i = 0; i < y; i++)
    {
         space(x);
         cout << char(RANDOM()) << endl;
    }
    
}
