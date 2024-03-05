#include <iostream>
#include <iomanip>

int linSearch(int arr[], int requiredKey, int size);
void showArr(int arr[], int size);

int main()
{
    const int arrSize = 10;
    int arr[arrSize];

    int requiredKey = 0;
    int nElement = 0;

    srand(time(NULL));

    for(int i = 0; i < arrSize; i++)
    {
        arr[i] = 1 + rand() % 50;
    }

    showArr(arr, arrSize);

    std::cout << "What number to find: ";
    std::cin >> requiredKey;

    nElement = linSearch(arr, requiredKey, arrSize);

    if(nElement != -1)
    {
        std::cout << "Element " << requiredKey << " is located at index: " << nElement << std::endl;
    }
    else
    {
        std::cout << "Element not found!" << std::endl;
    }
    return 0;
}

void showArr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << std::setw(4) << arr[i];
        if((i + 1) % 10 == 0)
        {
            std::cout << std::endl;
        }
    }
}

int linSearch(int arr[], int requiredKey, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == requiredKey)
            return i;
    }
    return -1;
}