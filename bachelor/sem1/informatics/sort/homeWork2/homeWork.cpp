#include <iostream>
using namespace std;
int main(){
    int n;
    std::cout << "enter the number of elements (insertion sort): ";
    std::cin >> n;
    int arr[n];
    std::cout << "\nenter the numbers\n";
    for(int i = 0; i < n; i ++){
        std::cin >> arr[i];
    }
    int temp;
    int counter = 0;
    for(int i=1;i<n;i++){
        for(int j=i; j>0 && arr[j-1]>arr[j];j--){
            counter++;
            int tmp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=tmp;
        }
    }
    cout<<"Elements after sorting of the array: "<<endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}