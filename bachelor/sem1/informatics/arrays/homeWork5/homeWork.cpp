#include <iostream>
#include <cmath>
int main() {
    int rows;
    int columns;
    std::cout << "enter number of rows:    ";
    std::cin >> rows;
    std::cout << "enter number of columns: ";
    std::cin >> columns;
    int arr[columns][rows];
    int max = -2000000;
    int i_index;
    int j_index;
    std::cout << "your table: \n";
    for(int i = 0; i < rows; i++){
        std::cout << "row #" << i << " : ";
        for(int j = 0; j < columns; j++){
            std::cin >> arr[j][i];
            if(arr[j][i] > max){
                max = arr[j][i];
                i_index = i;
                j_index = j;
            }
        }
        std::cout << "\n";
    }
    std::cout << "max element: " << max <<"; its indexes are: " << j_index << " and " << i_index;
  }