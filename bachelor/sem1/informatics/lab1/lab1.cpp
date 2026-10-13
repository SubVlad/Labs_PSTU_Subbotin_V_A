#include <iostream>
#include <iomanip>  

int main() {
    std::cout << "First part: " << std::endl;
    double a = 100;
    double b = 0.001;
    double Result = (pow((a - b), 4) - (pow(a,4) - 4 * pow(a,3) * b)) /
        ( 6 * pow(a,2) * pow(b,2) - 4 * a * pow(b,3) + pow(b,4));
    std::cout << "\tAnswer on type of double: " << Result << std::endl;
    std::cout << "\tAnswer on type of float: " << (float) Result << std::endl;
    std::cout << "Second part: " << std::endl;
    double n = 10;
    double m = 100;    
    Result = ++n * ++m;
    std::cout << "\tFirst task: " << (++n * ++m) << std::endl;
    n = 10;
    m = 100;    
    std::cout << std::boolalpha << "\tSecond task: " << (m++ < n) << std::endl;
    n = 10;
    m = 100;    
    std::cout << std::boolalpha << "\tThird task: " << (n++ > m) << std::endl;
}