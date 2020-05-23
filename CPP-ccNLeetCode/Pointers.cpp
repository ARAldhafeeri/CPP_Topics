// You can obtain the address of a variable by prepending the addres of the operator &

#include <cstdio>

int main() {
    // declare an integer
    int gettysburg = 10; 

    // print its value
    printf("gettysburg: %d\n", gettysburg);
    //decalre a pointer that points to gettysburg address
    int *gettysburg_address = &gettysburg;
    printf("address of pointer: %p\n", &gettysburg_address);
    printf("value of pointer: %d\n", *gettysburg_address);
}