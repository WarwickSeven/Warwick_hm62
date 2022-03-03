#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

void iniArray()
{
    int** ptrArr;
    const size_t m = 4;
    const size_t n = 4;
         
    ptrArr = new int * [m];
         for (size_t i = 0; i < m; i++)
         {
             ptrArr[i] = new int[n];
         }
};

void randomArray(int** ptrArr, size_t m, size_t n)
{
    srand(static_cast<unsigned int>(time(0)));
    for (size_t i = 0; i < m; i++)
    {
        for (size_t k = 0; k < n; k++)
        {
            ptrArr[i][k] = rand()%99;
        }
    }
};

void printArray(int** ptrArr, size_t m, size_t n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t k = 0; k < n; k++)
        {
            cout << ptrArr[i][k] << " ";
        }
        cout << endl;
    }
};

void clearMemory(int** ptrArr, size_t m)
{
    for (size_t i = 0; i < m; i++)
    {
        delete [] ptrArr[i];
    }
    delete[] ptrArr;
    ptrArr = nullptr;
};

int main()
{
    iniArray();
    randomArray();
    printArray();
    clearMemory();
    
    return 0;
}
