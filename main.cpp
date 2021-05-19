#include "Fibonacchi.h"

#include <iostream>
#include <chrono>
#include <functional>

using namespace std;
using namespace std::chrono;
using namespace std::chrono_literals;

int main()
{
    auto executeAndPrint = [](function<int(int)> f, int n)
    {
        auto start = high_resolution_clock::now();
        cout << "startTime : " << start.time_since_epoch().count() << endl;
        cout << f(n) << endl;
        auto end = high_resolution_clock::now();
        cout << "endTime : " << end.time_since_epoch().count() << endl;
        auto elapsed = duration_cast<milliseconds>(end - start).count();
        cout << "elapsedTime : " << elapsed << endl;
        cout << endl;
    };

    for (int i = 0; i < 50; ++i)
    {
        executeAndPrint(fibonacchiExponential, i);
        executeAndPrint(fibonacchiPolynomial, i);
    }
}