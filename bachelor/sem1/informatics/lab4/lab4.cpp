#include <iostream>
#include <cmath>
int arr[100];
int N = 0;   
void showArray(){    
    std::cout << "Your array: \n";
    for(int i = 0; i < N; i ++)
    {
        std::cout << "i # " << i << " - " << arr[i] << std::endl;
    }
}
void inserting(){    
    std::cout << "How many elements do you want to add?: ";
    int inserted;
    std::cin >> inserted;
    int toInsert;
    for(int i = 0; i < inserted; i++)
    {
        std::cin >> toInsert;
        arr[N] = toInsert;
        N ++;
    }
    showArray();
}
void deleting(){    
    int deleted;
    std::cout << "How many elements do you want to delete?: ";
    std::cin >> deleted;
    int toDelete;
    for(int i = 0; i < deleted; i ++)
    {
        arr[N] = 0;
        N --;
    }
    showArray();
}
int main() { 
    int choice = 1;
    while (choice == 1 || choice == 2)
    {
        std::cout << "Enter 1 to insert; 2 - to delete; any other number - to finish: ";
        std::cin >> choice;
        if(choice == 1)
        {
            inserting();        
        }
        else if(choice == 2)
        {
            deleting();
        }
    }
    std::cout << "Have a nice day!";
}