#include <iostream>
#include <vector>
#include <string>

// Функция для пузырьковой сортировки (Bubble Sort)
void bubbleSort(std::vector<int>& arr) {
    std::cout << "Применяется пузырьковая сортировка (Bubble Sort)\n";
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Функция для сортировки вставками (Insertion Sort)
void insertionSort(std::vector<int>& arr) {
    std::cout << "Применяется сортировка вставками (Insertion Sort)\n";
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Функция для сортировки выбором (Selection Sort)
void selectionSort(std::vector<int>& arr) {
    std::cout << "Применяется сортировка выбором (Selection Sort)\n";
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

// Функция для вывода массива
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Первый массив для пузырьковой сортировки
    std::vector<int> arr1 = { 64, 34, 25, 12, 22, 11, 90 };
    std::cout << "Исходный массив для пузырьковой сортировки: ";
    printArray(arr1);
    bubbleSort(arr1);
    std::cout << "Отсортированный массив: ";
    printArray(arr1);

    // Второй массив для сортировки вставками
    std::vector<int> arr2 = { 29, 10, 14, 37, 14 };
    std::cout << "\nИсходный массив для сортировки вставками: ";
    printArray(arr2);
    insertionSort(arr2);
    std::cout << "Отсортированный массив: ";
    printArray(arr2);

    // Третий массив для сортировки выбором
    std::vector<int> arr3 = { 20, 50, 40, 10, 30 };
    std::cout << "\nИсходный массив для сортировки выбором: ";
    printArray(arr3);
    selectionSort(arr3);
    std::cout << "Отсортированный массив: ";
    printArray(arr3);

    return 0;
}
