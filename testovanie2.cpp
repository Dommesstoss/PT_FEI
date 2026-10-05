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

void appendNode(List *list, const int val) {
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
}

void printList(const List *list) {
    if (list == nullptr || list->first == nullptr) {
        cout << "List: () [EMPTY]" << endl;
        return;
    }

    cout << "List: ";
    Node *cur = list->first;
    while (cur != nullptr) {
        cout << cur->data;
        if (cur->next != nullptr) {
            cout << " -> ";
        }
        cur = cur->next;
    }
    cout << " -> nullptr" << endl;
}

// Вспомогательная функция для очистки памяти после тестов
void clearList(List *list) {
    if (list == nullptr) return;
    Node *cur = list->first;
    while (cur != nullptr) {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
    list->first = nullptr;
}

int main() {
    // Создаем структуру списка и обнуляем head
    List myList;
    myList.first = nullptr;

    cout << "=== TEST 1: Добавление в пустой список ===" << endl;
    appendNode(&myList, 5);
    printList(&myList); // Ожидается: List: 5 -> nullptr

    cout << "\n=== TEST 2: Добавление элементов в конец ===" << endl;
    appendNode(&myList, 10);
    appendNode(&myList, 15);
    appendNode(&myList, -85);
    printList(&myList); // Ожидается: List: 5 -> 10 -> 15 -> -85 -> nullptr

    // Очищаем память
    clearList(&myList);

    return 0;
}