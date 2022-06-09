#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 3) return 1;
    return fib(n -  1) + fib(n - 2);
}

int main() {
    cout << fib(10) << endl;
    return 0;
}