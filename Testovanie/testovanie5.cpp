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


int main() {

    // tu mozete doplnit testovaci kod

    return 0;
}