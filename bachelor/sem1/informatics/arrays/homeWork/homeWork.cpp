#include <random>
#include <iostream>
#include <cmath>

int main() { 
    int N;
    std::cout << "enter the number of elements of square matrix: ";
    std::cin >> N;
    int arr[N][N];
    std::cout << "enter the elements: ";
    int sum = 0;
    int sum1_2 = 0;
    for(int i = 0; i < N; i ++){
        for(int j = 0; j < N; j ++){
            std::cin >> arr[i][j];
            sum += arr[i][j];
            if(i == 0 || i == 1){
                sum1_2 += arr[i][j];
            }
        }
    }
    std::cout << "sum of elements: " << sum;
    std::cout << "sum of elements of first two rows: " << sum1_2;

    std::cout << "Have a nice day!";
}