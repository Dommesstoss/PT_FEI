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

/*void insertNode(List *sortedList, const int val) {
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

}*/


/*List *joinLists(List *list1, List *list2) {
    List* spojka = new List;

    spojka->first = nullptr;
    if(list1->first == nullptr && list2->first == nullptr)
    {
        return spojka;
    }

    spojka->first = list1->first;

    if(list1->first != nullptr && list2->first == nullptr)
    {
        return spojka;
    }
    else if(list1->first == nullptr && list2->first != nullptr)
    {
        spojka->first = list2->first;
        return spojka;
    }

    Node* cure = spojka->first;

    while(cure->next!=nullptr)
    {
        cure = cure->next;
    }

    cure->next = list2->first;
    

    return spojka;
}*/

/*void removeLastNode(List *list) {
    // TODO

    if(list->first == nullptr)
    {
        return;
    }

    Node* erase = list->first;
    if(erase->next == nullptr)
    {
        delete list->first;
        list->first = nullptr;
        return;
    }

    while(erase->next->next != nullptr)
    {
        erase = erase->next;
    }

    delete erase->next;
    erase->next = nullptr;

}*/

/*int sumNodes(const List *list, const size_t n) {
    if(n == 0)
    {
        return 0;
    }

    if(list->first == nullptr)
    {
        return 0;
    }

    int counter = 1;
    int sum = list->first->data;

    while(counter!=n)
    {
        sum += list->first->next->data;
        list->first = list->first->next;
        counter++;
    }

    return sum;
}*/


bool contains(const List *list1, const List *list2) {
    if(list1->first == nullptr && list2->first==nullptr){
        return true;
    }
    else if(list1->first == nullptr && list2->first!=nullptr){
        return false;
    }
    else if(list1->first != nullptr && list2->first == nullptr){
        return true;
    }

    
    const Node* l2_cur = list2->first;
    

    int counter =0;

    while(l2_cur!=nullptr)
    {
        const Node* l1_cur = list1->first;
        bool found = false;

        while(l1_cur != nullptr)
        {
            if(l2_cur->data == l1_cur->data)
            {
                
                found = true;
                break;
            }
            l1_cur = l1_cur->next;

        }
        if(found == false)
        {
            return false;
        }
        l2_cur = l2_cur->next;
    }
    
    return true;
}

int main() {
   
    return 0;
}