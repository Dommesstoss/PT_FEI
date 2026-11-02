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


int main() {

    // tu mozete doplnit testovaci kod

    return 0;
}