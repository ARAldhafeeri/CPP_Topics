#include <cstdio>

int main() {
        goto silent_bob;
    luke:
        printf("Iam not afraid.\n");
        goto yoda;
    silent_bob:
        goto luke;
    yoda:
        printf("You will be.");
}