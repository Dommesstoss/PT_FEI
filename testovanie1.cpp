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

/*int numDigits(int value){

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
}*/

/*void print(const Date *date, const char *format)
{
    for(int i = 0; format[i]!='\0'; i++)
    {
        if(format[i] == 'D')
        {
            std::cout << date->day;
            continue;
        }
        else if(format[i] == 'M')
        {
            std::cout << date->month;
            continue;
        }
        else if(format[i] == 'Y')
        {
            std::cout << date->year;
            continue;
        }
        std::cout << format[i];
    }
}*/

/*Date* create(int day, int month, int year)
{
    Date *den = new Date;

    den->year = year;

    den->month = month;

    den->day = day;

    return den;
}*/

/*void destroy(Date **date) {
    // TODO

    if(data != nullptr && *date !=nullptr)
    {
        delete (*date);
        *date = nullptr;
    }

}*/


/*bool isInLeapYear(const Date *date) {
  if(date == nullptr)
  {
    return false;
  }
  
  if(date->year%4==0){
    if(date->year%100==0 && date->year%400!=0)
    {
        return false;
    }
    return true;
  }
}*/

bool isValid(const Date *date) {
    if(date == nullptr)
    {
        return false;
    }
    
    if (date->day <= 0 || date->month <= 0 || date->month > 12) {
        return false;
    }


    if (date->month == 4 || date->month == 6 || date->month == 9 || date->month == 11) {
        if (date->day > 30) {
            return false;
        }
    }
    else if (date->month == 1 || date->month == 3 || date->month == 5 || date->month == 7 || date->month == 8 || date->month == 10 || date->month == 12) {
        if (date->day > 31) {
            return false;
        }
    }
    else if (date->month == 2) {
        bool Leap = true;
        if(date->year%4==0){
            if(date->year%100==0 && date->year%400!=0)
            {
                Leap = false;
            }
        }

        if (Leap && date->day > 29) {
            return false;
        }
        if (!Leap && date->day > 28) {
            return false;
        } 
    }


    return true;
}



int main()
{


    return 0;
}