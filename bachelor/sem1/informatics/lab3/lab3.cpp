#include <iostream>
#include <cmath>
  int factorial(int n)
  {
    int result = 1;
    for(int i = 1; i < n; i++){result *= i;}
    return result;
  }
int main() {
    double x = 0.1;
    double max = 1;
    double step = (max - x) / 10;
    double sum = 1.0;
    long long check = 1;
    for(; x < max; x = x + step)
    {
        double yy = 1.5 * pow(x,2);
        for(int n = 1; check && n <= 35; n ++)
        {
            yy = pow(-1,n) * (2*pow(n,2) + 1) / (factorial(2*n)) * pow(x,2*n);
            check = (factorial(2*n));  
            sum = sum + yy;
            double y = (1 - x*x/2) * cos(x) - x/2 * sin(x);
            std::cout << "x = " << x << " sum #" << n << " = " << sum 
            << " y = " << y << std::endl;
        }
        sum = 1.0;
        check = 1;
    }
  }