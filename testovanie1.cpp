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
    std::cin >> position->x >> position->y;

    //cout << "x: " << position->x << ", " << "y: " << position->y;


}


int main()
{
    Position pos;

    uloha3(&pos);

    return 0;
}