#include <iostream>

using namespace std;

struct Node {
    int data; // hodnota uzla
    Node *next; // adresa nasledujuceho uzla zoznamu
};

struct List {
    Node *first; // adresa prveho uzla zoznamu
};

struct ListData {
    int *data; // pole hodnot uzlov
    size_t len; // dlzka pola 'data'
};

/*void appendNode(List *list, const int val) {
    // TODO
    Node *newNode = new Node;
    newNode->data = val;
    newNode->next = nullptr;

    if(list->first == nullptr)
    {
        list->first = newNode;
    }
    else{
    Node *cur = list->first;
    while(cur->next!=nullptr)
    {
        cur = cur->next;
    }

    cur->next = newNode;
    }
}*/

/*List *createList(const ListData *listData) {
    List* newOne = new List;

    Node* last = nullptr;
    if(ListData->len == 0)
    {
        newOne->first = nullptr;
        return newOne;
    }

    for(size_t i = 0; i<ListData->len; i++)
    {
    Node *nova = new Node;

    nova->data = ListData->data[i];
    nova->next = nullptr;

    if(i == 0)
    {
        newOne->first = nova;
    }
    else{
        last->next = nova;
    }

    last = nova;

    }
    return newOne;
}*/

void insertNode(List *sortedList, const int val) {
    // TODO
    Node* sortedVal = new Node;
    sortedVal->data = val;
    sortedVal->next = nullptr;
    int paci = 0;

    if(sortedList->first == nullptr)
    {
        sortedList->first = sortedVal;
        return;
    }
    
    if(sortedVal->data <=sortedList->first->data)
        {
            sortedVal->next = sortedList->first;
            sortedList->first = sortedVal;
            paci = 1;
            return;
        }
    Node* cur = sortedList->first;

    while(cur->next!=nullptr)
    {
        
        if(sortedVal->data <= cur->next->data)
        {
            sortedVal->next = cur->next;
            cur->next = sortedVal;
            paci =1;
            return;
        }

        cur=cur->next;
    }
    if(paci == 0){
        cur->next = sortedVal;
    }

}

int main() {
   
    return 0;
}