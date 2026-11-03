#include <iostream>
#include <cmath>
int main() {
    std::cout << "enter the number of elements: ";
    int N;
    bool flag = true;
    int number = 0;
    int input = 0;;
    std::cin >> N;
    int arr[N];
    std::cout << "enter the numbers\n";
    for(int i = 0; i < N; i++){
        std::cin >> input;
        arr[i] = input;
        if(i > 0 && flag){
            flag = !(number >= 0 && input < 0);
        }
        number = input;
    }
    std::cout <<  " \narray is ordered in ascending order = " << std::boolalpha << flag;
  }