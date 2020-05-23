#include <cstddef>
#include <cstdio>

int main() {
    size_t size_c = sizeof(char);
    printf("char: %zd\n", size_c);
    size_t size_s = sizeof(short);
    printf("short: %zd\n", size_s);
    size_t size_i = sizeof(int);
    printf("int: %zd\n", size_i);
    size_t size_l = sizeof(long);
    printf("long: %zd\n", size_l);
    return 0;
}
 
 // You can build software test that analyize memory use
 // Get the size of your variables and then
 // sugest changes for memory optomazition.
 