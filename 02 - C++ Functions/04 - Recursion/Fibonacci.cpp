#include <iostream>
#include <map>
#include <cmath>
using namespace std;

// Implementing Fibonacci functions in C++

int calls;

int fibonacci_recursive(int n)
{
    calls++;
    if (n == 0 || n == 1) return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

map<int, int> mem;

int fibonacci_memorized(int n)
{
    calls++;
    if (mem.count(n) > 0) return mem[n];
    mem[n] =  fibonacci_memorized(n - 1) + fibonacci_memorized(n - 2);
    return mem[n];
}

int fibonacci_iterative(int n) 
{
    calls++;
    if (n == 0 || n == 1) return n;
    int x = 0, y = 1, z = 0;
    for (int i = 0; i < n; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return x;
}

int fibonacci_formulaic(int n)
{
    calls++;
    if (n == 0 || n == 1) return n;
    double phi = (1 + sqrt(5)) / 2;
    return round((pow(phi, n) - pow(1 - phi, n)) / (phi - (1 - phi)));
}

int main()
{
    int n = 30;

    calls = 0;
    int f = fibonacci_recursive(n);
    cout << "Recursive:" << endl;
    cout << "f(" << n << ") = " << f << endl;
    cout << "Calls:  " << calls << endl << endl;

    calls = 0;
    mem = {{0, 0}, {1, 1}};
    f = fibonacci_memorized(n);
    cout << "Recursive (with memory):" << endl;
    cout << "f(" << n << ") = " << f << endl;
    cout << "Calls:  " << calls << endl << endl;

    calls = 0;
    f = fibonacci_iterative(n);
    cout << "Iterative:" << endl;
    cout << "f(" << n << ") = " << f << endl;
    cout << "Calls:  " << calls << endl << endl;

    calls = 0;
    f = fibonacci_formulaic(n);
    cout << "Formulaic:" << endl;
    cout << "f(" << n << ") = " << f << endl;
    cout << "Calls:  " << calls << endl;
    
    return 0;
}