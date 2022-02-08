#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

void binarySearch(int* arr, int n, int key) {
    int left = 0;
    int right = n;
    int search = -1;
    while (left <= right) {

        int mid = (left + right) / 2;

        if (key == arr[mid]) {
            search = mid;
            break;
        }
        if (key < arr[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }

    }

    if (search == -1) {
        std::cout << "Not found" << std::endl;
    }
    else {
        std::cout << "Element " << search << " = " << arr[search] <<std::endl;
    }
    
}

int main()
{
    int n = 0;
    std::cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = rand();
    }

    std::sort(arr, arr + n, [](int a, int b) {
        return a > b;
    });
    
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << std::endl;

    std::sort(arr, arr + 5, [](int a, int b) {
        return a < b;
    });

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << std::endl << "Write down number which should be found" << std::endl;
    int key = 0;
    std::cin >> key;

    clock_t start = clock();
    binarySearch(arr, n, key);
    clock_t end = clock();
    double seconds = (double)(end - start) / (double)CLOCKS_PER_SEC;
    std::cout << "Work time: " << seconds << std::endl;
    start = clock();
    if(std::binary_search(arr, arr + n, key));
    end = clock();
    seconds = (double)(end - start)/ (double)CLOCKS_PER_SEC;
    std::cout << "Work time of std function: " << seconds;
}
