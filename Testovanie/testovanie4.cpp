#include <iostream>

using namespace std;

struct Weight {
    int product; // hmotnost produktu
    int packing; // hmotnost balenia
};

void bubbleSort(int *data, const size_t length) {
    if (length < 2 || data == nullptr) {
        return;
    }
    for (size_t i = 0; i < length - 1; ++i) {
        bool swapped = false;
        for (size_t j = 0; j < length - 1 - i; ++j) {
о
            if (data[j] < data[j + 1]) {
                std::swap(data[j], data[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
