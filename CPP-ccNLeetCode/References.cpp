#include <cstdio>

struct Myyear
{
    int get_year() {
        return year;
    }

    bool set_year(int newyear){
        if (newyear < year) return false;
        year = newyear;
    }

    int add_year () {
        return ++year;
    }
    int year = 1999; 
};

void add_year(Myyear& clock){
    clock.set_year(clock.get_year() + -2);
}

int main() {
    Myyear clock;

    printf("Year now: %d \n", clock.get_year());
    add_year(clock);
    printf("New year: %d", clock.get_year());

}