#include <cstdio>
#include <cstddef>
int main() {
    // array initialization
    int arr[] = {1, 2, 3, 4};
    // Accessing Array elements 
    arr[2] = 100;
    printf("my array %d", &arr);
    unsigned long maximum = 0;
for(size_t i=0; i < 4; i++){
    if (arr[i] > maximum) {
        maximum = arr[i];
    }

}
    printf( "the maximum value is %lu", maximum);
return 0;
}