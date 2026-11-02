#include <iostream>

using namespace std;

void siftUp(int data[], const size_t addIndex)
{
    size_t cur = addIndex;
    int temp;

    if(cur == 0)
    {
        return;
    }

    while(cur > 0)
    {
        size_t parent = (cur-1)/2;
        
        if(data[cur] < data[parent]){
            temp = data[parent];
            data[parent] = data[cur];
            data[cur] = temp;
            cur = parent;
        }
        else
        {
            break;
        }

    } 
}

//          vstup:  data = (7, 2, 1, 2, 8, 5, 3, 4, 2, 2, 6), length = 11
//          vystup: data = (1, 2, 2, 2, 2, 5, 3, 7, 4, 8, 6)
void buildHeapSiftUp(int data[], const size_t length)
{
    for(size_t i = 0; i<length; i++)
    {
        if(i>0){
            size_t parent = (i-1)/2;

            if(data[i] < data[parent])
            {
                siftUp(data, i);
            }
        }

    }
}

void siftDown(int data[], const size_t topIndex, const size_t length)
{
    size_t cur = topIndex;

    while (cur < length)
    {
        size_t left = 2 * cur + 1;
        size_t right = 2 * cur + 2;
        size_t smallest = cur;

        if (left < length && data[left] < data[smallest]) {
            smallest = left;
        }

        if (right < length && data[right] < data[smallest]) {
            smallest = right;
        }

        if (smallest == cur) {
            break;
        }

        int temp = data[cur];
        data[cur] = data[smallest];
        data[smallest] = temp;

        cur = smallest;
    }
}


void buildHeapSiftDown(int data[], const size_t length)
{
    if (length <= 1) {
        return;
    }

    for (size_t i = length / 2; i > 0; --i) {
        siftDown(data, i - 1, length);
    }
}

int main() {

    // tu mozete doplnit testovaci kod

    return 0;
}