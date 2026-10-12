#include <iostream>
#include <iomanip>  

int main() {
    //вариант 22
    std::cout << "First part: " << std::endl;
    double a = 100;
    double b = 0.001;
    double FirstAction = a - b;
    FirstAction = FirstAction * FirstAction * FirstAction * FirstAction;
    double SecondAction = a * a * a * a - 4 * a * a * a * b;
    double Divided = FirstAction - SecondAction;
    double Divider = 6 * a * a * b * b - 4 * a * b * b * b + b * b * b * b;
    double DoubleResult = Divided / Divider;
    float FloatResult = float(DoubleResult);
    std::cout << "\tAnswer on type of double: " << DoubleResult << std::endl;
    std::cout << "\tAnswer on type of float: " << FloatResult << std::endl;

    std::cout << "Second part: " << std::endl;
    double n = 10;
    double m = 100;    
    double FirstTask = ++n * ++m;
    n = 10;
    m = 100;    
    bool SecondTask = m++ < n;
    n = 10;
    m = 100;    
    bool ThirdTask = n++ > m;
    std::cout << "\tFirst task: " << FirstTask << std::endl;
    std::cout << std::boolalpha << "\tSecond task: " << SecondTask << std::endl;
    std::cout << std::boolalpha << "\tThird task: " << ThirdTask << std::endl;
}