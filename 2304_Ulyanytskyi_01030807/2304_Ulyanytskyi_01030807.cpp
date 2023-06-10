#include <iostream>
#include <array>

using namespace std;

const int ARRAY_SIZE = 14;

int main()
{
    const array<int, ARRAY_SIZE> Fibonacci_Array{ 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377 };
    array<double, ARRAY_SIZE> result_array;

    cout << "Resulr array = { ";
    for (int i = 0; i < ARRAY_SIZE - 1; i++) {
        result_array[i] = static_cast<double>(Fibonacci_Array[i + 1]) / Fibonacci_Array[i];
        cout << result_array[i] << ' ';
    }
    cout << '}';

    return 0;
}