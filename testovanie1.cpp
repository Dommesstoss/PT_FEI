#include <iostream>
#include <climits>

using namespace std;

struct Position {
    int x; // x-ova suradnica
    int y; // y-ova suradnica
};

// Datum
struct Date {
    int year;  // rok
    int month; // mesiac
    int day;   // den
};

// Uspesnost vykonania funkcie
enum class Result {
    SUCCESS, // funkcia vykonana uspesne
    FAILURE  // chyba pri vykonavani funkcie
};

/*void uloha1(const Position *position)
{
    cout << "x: " << position->x << ", " << "y: " << position->y;



}*/

/*void uloha2(const Position &position)
{
    std::cout << "x: " << position.x << ", " << "y: " << position.y;


}*/

void uloha3(Position *position)
{
    //std::cin >> position->x >> position->y;

    //cout << "x: " << position->x << ", " << "y: " << position->y;


}

int maximum(const int *data, std::size_t length, Result* result)
{
    if(length == 0){ 
        *result = Result::FAILURE;
        return INT_MIN;
    }

    int maxim = data[0];

    for(int i = 0; i<length; i++)
    {
        if(maxim < data[i])
        {
            maxim = data[i];
        }
    }

    *result = Result::SUCCESS;
    return maxim;


}



int main()
{
    Result res;

    // --- Тест 1: Обычный массив с числами ---
    int arr1[] = {1, 2, 5, 0, 1};
    int max1 = maximum(arr1, 5, &res);
    
    std::cout << "Test 1:\n";
    std::cout << "Max: " << max1 << "\n";
    std::cout << "Status: " << (res == Result::SUCCESS ? "SUCCESS" : "FAILURE") << "\n\n";

    // --- Тест 2: Массив с отрицательными числами ---
    int arr2[] = {-5, -2, -10};
    int max2 = maximum(arr2, 3, &res);
    
    std::cout << "Test 2:\n";
    std::cout << "Max: " << max2 << "\n";
    std::cout << "Status: " << (res == Result::SUCCESS ? "SUCCESS" : "FAILURE") << "\n\n";

    // --- Тест 3: Пустой массив ---
    int arr3[] = {};
    int max3 = maximum(arr3, 0, &res);
    
    std::cout << "Test 3 (Empty array):\n";
    std::cout << "Max: " << max3 << " (INT_MIN)\n";
    std::cout << "Status: " << (res == Result::SUCCESS ? "SUCCESS" : "FAILURE") << "\n";

    return 0;

}