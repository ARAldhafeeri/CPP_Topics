#include <cstdio>

int main() {
    int original = 100;
    // declaring a refrence 
    int& ref_original = original;

    printf("Original: %d \n", original);
    printf("refrence %d \n", ref_original);

    int New_original = 200;
    // Here we are using the refrence to reassign original value
    ref_original = New_original;
    
    printf("Original: %d \n", original);
    printf("new: %d \n", New_original);
    printf("refrence %d \n", ref_original);
}