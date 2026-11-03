#include <iostream>
using namespace std;

int main(){
    int n;
    std::cout << "enter the number of elements (selection sort): ";
    std::cin >> n;
    int arr[n];
    std::cout << "\nenter the numbers\n";
    for(int i = 0; i < n; i ++){
        std::cin >> arr[i];
    }
    int temp, smallestPosition;
    for(int i = 0; i < n; i++)
    {
        
        smallestPosition = i;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < arr[smallestPosition])
                smallestPosition = j;
        }

        temp = arr[i];
        arr[i] = arr[smallestPosition];
        arr[smallestPosition] = temp;
    }
    cout << "Elements after sorting of the array: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}