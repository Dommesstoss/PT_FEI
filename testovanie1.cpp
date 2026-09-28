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
/*
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


}*/

int numDigits(int value){

    int counter = 0;

    if(value<=0)
    {
        counter+=1;
        value = abs(value);
    }

    for(int i = 0; value>=1; i++)
    {
        
        value = value /10;
        counter+=1;
    }

    return counter;
}



int main()
{
    int value = -18450;

    int kolvo = numDigits(value);

    std::cout << "kolvo znakov -> " << kolvo;

    return 0;

}