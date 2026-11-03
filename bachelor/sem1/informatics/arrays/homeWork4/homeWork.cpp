#include <iostream>
#include <cmath>
int main() {
    int N;
    std::cout << "enter the number of elements: ";
    std::cin >> N;
    int arr[N];
    std::cout << "\nenter the numbers\n";
    for(int i = 0; i < N; i ++){
        std::cin >> arr[i];
    }
    std::cout << "\nnow we’ll turn it over. here is the new array: \n";
    int newArr[N];
    for(int i = N - 1, j = 0; i >= 0; i --, j ++){
        newArr[j] = arr[i];
        std::cout << newArr[j] << " ";
    }
  }