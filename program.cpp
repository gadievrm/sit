#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0;
    int b = 1;
    int t;
    for (int i = 0; i < n; i++) {
        cout << a << endl;
        t = b;
        b = a + b;
        a = t;
    }
}

int main() {
    int n = 10;
    cout << "Pervye " << n << " chisel Fibonacci:\n";
    fib(n);
    return 0;
}