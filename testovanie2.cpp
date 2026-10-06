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

List *createList(const ListData *listData) {
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
}

int main() {
   
    return 0;
}