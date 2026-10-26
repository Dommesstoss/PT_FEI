#include <iostream>

using namespace std;

struct Weight {
    int product; // hmotnost produktu
    int packing; // hmotnost balenia
};

/*void bubbleSort(int *data, const size_t length) {
    if (length < 2 || data == nullptr) {
        return;
    }
    for (size_t i = 0; i < length - 1; ++i) {
        bool swapped = false;
        for (size_t j = 0; j < length - 1 - i; ++j) {

            if (data[j] < data[j + 1]) {
                std::swap(data[j], data[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}*/

/*void bubbleSort(Weight *data, const size_t length) {
    if (length < 2 || data == nullptr) {
        return;
    }
    for (size_t i = 0; i < length - 1; ++i) {
        bool swapped = false;
        for (size_t j = 0; j < length - 1 - i; ++j) {
            int currentWeight = data[j].product + data[j].packing;
            int nextWeight = data[j + 1].product + data[j + 1].packing;

            if (currentWeight < nextWeight) {
                std::swap(data[j], data[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}*/

/*size_t getPivotIndex(const int *data, const size_t low, const size_t high) {
    size_t mid = (high + low) / 2;
    size_t last = high - 1;

    int a = data[low];
    int b = data[mid];
    int c = data[last];

    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        return low;
    }
    if ((b >= a && b <= c) || (b <= a && b >= c)) {
        return mid;
    }
    return last;
}*/

size_t partition(int *data, const size_t pivot, const size_t low, const size_t high) {
    size_t last = high - 1;

    std::swap(data[pivot], data[last]);

    int pivotValue = data[last];
    size_t i = low;

    for (size_t j = low; j < last; ++j) {
        if (data[j] >= pivotValue) {
            std::swap(data[i], data[j]);
            ++i;
        }
    }

    std::swap(data[i], data[last]);
    return i;
}

int main(){


    return 0;
}
