#include <iostream>
#include <cmath>

int main() {
    double a;
    double sum;
    for (double n = 1; n <= 15; n++)
    {
        if(log(n) != 0)
        {
            sum = sum + (pow(n, log(n)) / pow(log(n), n));
        }
    }
        std::cout << "The sum of the first 15 terms of a series: " << sum << std::endl;
  }