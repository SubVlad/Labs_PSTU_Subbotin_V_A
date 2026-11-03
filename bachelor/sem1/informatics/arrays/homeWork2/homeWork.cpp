#include <random>
#include <iostream>
#include <cmath>

int main() { 
    int N;
    std::cout << "enter the number of elements: ";
    std::cin >> N;
    int arr[N];
    std::cout << "enter the elements: ";
    int max = -20000000;
    int max_number = -1;
    int min =  20000000;
    int min_number = -1;
    for(int i = 0; i < N; i ++){
        std::cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
            max_number = i;
        }
        if(arr[i] < min){
            min = arr[i];
            min_number = i;
        }
    }
    std::cout << "\nmax element: " << max << " at number #" << max_number;
    std::cout << "\nmin element: " << min << " at number #" << min_number;
    std::cout << "\nHave a nice day!";
}