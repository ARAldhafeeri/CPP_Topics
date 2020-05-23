// syntax 
// for ( element-type element-name : array-name){ --snip --}
#include <cstdio>
#include <cstddef>
int main() {
    // array initialization
    unsigned long arr[] = {1, 2, 3, 4};
    // Accessing Array elements 
    unsigned long maximum = 0;
for(unsigned long value : arr){
    if (value > maximum) {
        maximum = value;
    }

}
    printf( "the maximum value is %lu", maximum);
return 0;
}