#include <cstdio>

struct Book {
    char name[256];
    int year;
    int pages; 
    bool hardcover; 
    //methods
    void add_year(void) {
        year++;
    }
};

int main() {
    Book neuromancer; 
    neuromancer.pages = 271;
    neuromancer.year = 1720;
    printf("Neuromancer has %d pages.", neuromancer.pages);
     printf("Neuromancer year is %d .", neuromancer.year);
     neuromancer.add_year();
    printf("Neuromancer next year is %d .", neuromancer.year);
}