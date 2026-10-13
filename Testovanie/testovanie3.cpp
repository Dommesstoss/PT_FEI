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




void insertionSort(int *data, const size_t length) {
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
}


void insertionSort(const char *data[]) {
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
}
 
main()
{

    return 0;

}