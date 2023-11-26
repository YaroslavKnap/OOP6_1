#include <iostream>
#include <vector>

template <typename T>
void bubbleSort(std::vector<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Обмін елементів, якщо вони знаходяться в неправильному порядку
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // Приклад використання шаблонної функції для сортування цілих чисел
    std::vector<int> intArray = { 64, 25, 12, 22, 11 };
    std::cout << "Original array: ";
    for (int val : intArray) {
        std::cout << val << " ";
    }

    bubbleSort(intArray);

    std::cout << "\nSorted array: ";
    for (int val : intArray) {
        std::cout << val << " ";
    }

    return 0;
}
