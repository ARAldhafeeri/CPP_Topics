#include <cstdio>
struct Book {
    int year;
    Book() {
        year = 2019; 
    }
 
};

int main(){
    Book mybook;
    printf("My book year is %d", mybook.year);

    return 0;
}