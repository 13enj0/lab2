#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MassSort.h"
#include <conio.h>
#include <chrono>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ukr");
    srand(time(NULL));

    while(true){

    const auto N = 20;
    int n = N;
    int m = 0;
    MassSort sort;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = 1 + rand() % N;
    }

    cout << "Не вiдсортований масив: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }




    cout << "\n\n1 - впорядкування вибором." << endl;
    cout << "2 - впорядкування бульбашкою." << endl;
    cout << "3 - Шейкер-впорядкування." << endl;
    cout << "4 - впорядкування вставками." << endl;

    cout << "\n\nВиберiть спосiб сортування: ";
    cin >> m;

    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    switch (m)
    {

    case 1: sort.indexsort(arr, N); break;
    case 2: sort.booblsort(arr, N); break;
    case 3: sort.shakesort(arr, N); break;
    case 4: sort.vstavkasort(arr, N); break;
    default:
        break;
    }

    cout << "\n\nBiдсортований масив: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    std::cout << "\n\nB Мiлiсекундах (ms) = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << std::endl;
    std::cout << "В Наносекундах (ns) = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << std::endl;
    cout << "\n\n X - для того щоб вийти..";
    cout << "\n Enter - для того щоб повторити...";
    char c;
    while (true) {
        c = _getch();
        if (c == 'x')
        {
            break;
        }
        else if (c == 13)
        {
            system("Cls");
            break;
        }
        else
        {
            cout << "\nНажмiть правильну кнопку!!!\n";
        }
    }
        if (c == 'x')
        {
            break;
        }
    
}

    return 0; 
}