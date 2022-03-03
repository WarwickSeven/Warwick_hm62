#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

const size_t m = 4;
const size_t n = 4;

int iniArray(int **ptrArr)
{
    ptrArr = new int * [m];
         for (size_t i = 0; i < m; i++)
         {
             ptrArr[i] = new int[n];
         }
    return **ptrArr;
};

void randomArray(int** ptrArr)
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

void printArray(int** ptrArr)
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

void clearMemory(int** ptrArr)
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
    int** ptrArr;
    iniArray(ptrArr);
    randomArray(ptrArr);
    printArray(ptrArr);
    clearMemory(ptrArr);
    
    return 0;
}
