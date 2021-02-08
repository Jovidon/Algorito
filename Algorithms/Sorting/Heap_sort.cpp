#include <iostream>

using namespace std;

/**
* Checks if two arrays are equal
* @input: array to be checked
* @expected: expected result
* @size: sizeof @input and @exptected
*/
bool is_equal(int *input, int *expected, size_t size) {

    for (int i = 0; i < size; i++) {
        if (input[i] != expected[i]) {
            return false;
        }
    }

    return true;
}

/**
* Sift down algorithm
* @array: array as a max-heap
* @start: start index of @array
* @end: end index of @array
*/
void sift_down(int *array, size_t start, size_t end) {
    size_t parent = start, child;

    while (parent * 2 + 1 <= end) {
        child = parent * 2 + 1;
        if (child + 1 <= end && array[child + 1] > array[child]) {
            child++;
        }
        if (array[parent] < array[child]) {
            swap(array[parent], array[child]);
            parent = child;
        } else {
            break;
        }
    }
}

/**
* Turns an @array into a max-heap
* @array: array which will be heapfied
* @size: sizeof @array
*/
void heapify(int *array, size_t size) {
    // Get parent of the last element
    size_t last_parent = (size - 1) / 2;
    size_t start = last_parent;

    while (start <= last_parent) {
        sift_down(array, start, size - 1);
        start--;
    }
}

/**
* Heapsort
* @array: array which will be sorted
* @size: sizeof @array
*/
void heapsort(int *array, size_t size) {
    if (!array) {
        return;
    }

    size_t end = size - 1;

    heapify(array, size);

    while (end > 0) {
        swap(array[end], array[0]);
        end--;
        sift_down(array, 0, end);
    }
}

int main() {
    int arr1[] = { 7, 4, 2, 1, 3, 5, 9, 8, 6 };
    int srted1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int arr2[] = {-3, 1, 0, -14};
    int srted2[] = { -14, -3, 0, 1};

    bool is_error = false;

    heapsort(arr1, sizeof(arr1) / sizeof(arr1[0]));
    heapsort(arr2, sizeof(arr2) / sizeof(arr2[0]));

    if (!is_equal(arr1, srted1, sizeof(srted1) / sizeof(srted1[0]))) {
        cout << "Wrong answer" << endl;
        is_error = true;
    }

    if (!is_equal(arr2, srted2, sizeof(srted2) / sizeof(srted2[0]))) {
        cout << "Wrong answer" << endl;
        is_error = true;
    }

    cout << (is_error ? "You have some failed tests  " : "All tests passed!") << endl;

    return 0;
}
