#include <iostream>
#include <vector>

void swap(std::vector<int> &vec, int *arr) {
    for (int i = 0; i < vec.size(); i++) {
        int temp = arr[i];
        arr[i] = vec[i];
        vec[i] = temp;
    }
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    int arr[] = {2, 4, 6, 8, 10, 12, 14};

    swap(vec, arr);
    for (int i : vec) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}
