#include <iostream>
using namespace std;
int main(){
    int N;
    std::cout << "enter the number of elements (bubble sort): ";
    std::cin >> N;
    int arr[N];
    std::cout << "\nenter the numbers\n";
    for(int i = 0; i < N; i ++){
        std::cin >> arr[i];
    }
    int temp;
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Elements after sorting of the array: "<<endl;
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
    return 0;
}