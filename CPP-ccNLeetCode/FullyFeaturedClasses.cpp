#include <cstdio>
// Always initlized
// which constructor is called depends on the argument given
struct x {
    x() {
        printf("No arguments \n");
    }
    x(char x){
        printf(" The stirng is %c \n", x);
    }
    x( int x) {
        printf(" The number is %d \n", x);
    }

};

int main(){

x t1;
x t2{'c'};
x t3{ 5};

}