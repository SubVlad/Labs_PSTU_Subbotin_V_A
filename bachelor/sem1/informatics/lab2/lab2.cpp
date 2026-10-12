#include <iostream>
#include <cmath>

int main() {
    //вариант 22
    double a;
    double sum;
    double log_;
    double pow_1;
    double pow_2;
    for (double n = 1; n <= 15; n++)
    {
        log_ = log(n);
        pow_1 = pow(n, log_);
        pow_2 = pow(log_, n);
        a = pow_1 / pow_2;
        sum = sum + a;
    }
        std::cout << "The sum of the first 15 terms of a series: " << sum << std::endl;
  }