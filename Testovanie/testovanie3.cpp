#include <iostream>
#include <cstring>

using namespace std;


struct Node {
    int data; // hodnota uzla
    Node* next; // smernik na dalsi uzol zoznamu
};

// Zretazeny zoznam
struct List {
    Node* first; // smernik na prvy uzol zoznamu
};




/*void insertionSort(int *data, const size_t length) {
    if (length <= 1) return;

    for (size_t i = 1; i < length; i++) {
        int key = data[i];
        int j = i;

        
        while (j > 0 && data[j - 1] < key) {
            data[j] = data[j - 1];
            j--;
        }

        data[j] = key; 
    }
}*/


/*void insertionSort(const char *data[]) {
    if (data[0]== nullptr || data[1]== nullptr)
    {
        return;
    }

    for(int i = 1; data[i]!=nullptr; i++)
    {
        char *key = data[i];
        int j = i;

        while(j>0 && strcmp(data[j-1], key)<0)
        {
            data[j] = data[j-1];
            j--;
        }

        data[j] = key;

    }
}*/

/*void insertionSort(List * list) {
    if(list == nullptr||list->first == nullptr || list->first->next == nullptr)
    {
        return;
    }

    Node* sortedHead = nullptr;
    Node* current = list->first;

    while (current != nullptr) {
        Node* nextNode = current->next;

        if (sortedHead == nullptr || current->value >= sortedHead->value) {
            current->next = sortedHead;
            sortedHead = current;
        }
        else
        {
            Node* search = sortedHead;
            while (search->next != nullptr && search->next->value > current->value) {
                search = search->next;
            }

            current->next = search->next;
            search->next = current;
        }
        current = nextNode;
    }
    list->first = sortedHead;

}*/

/*void mergeNeighbours(int *output, const int *input, const size_t low, const size_t middle, const size_t high) {
    size_t i = low;
    size_t j = middle;
    size_t k = low;

    while (i < middle && j < high) {
        if (input[i] >= input[j]) {
            output[k] = input[i];
            i++;
        } else {
            output[k] = input[j];
            j++;
        }
        k++;
    }

    while (i < middle) {
        output[k] = input[i];
        i++;
        k++;
    }

    while (j < high) {
        output[k] = input[j];
        j++;
        k++;
    }
}*/

void mergeSort(int *data, const size_t length) {
    if (length <= 1) {
        return;
    }

    int *temp = new int[length];

    auto mergeSortRecursive = [&](auto& self, size_t low, size_t high) -> void {
        if (high - low <= 1) {
            return;
        }

        size_t middle = low + (high - low) / 2;

        self(self, low, middle);
        self(self, middle, high);

        mergeNeighbours(temp, data, low, middle, high);

        for (size_t i = low; i < high; i++) {
            data[i] = temp[i];
        }
    };

    mergeSortRecursive(mergeSortRecursive, 0, length);

    delete[] temp;
}


main()
{

    return 0;

}