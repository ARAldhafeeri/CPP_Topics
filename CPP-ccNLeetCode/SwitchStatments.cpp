/*
switch statments
*/

#include <cstdio> 
enum class Race {
    dinan,
    teklan,
    moiran,
    camite,
    julian,
    aidan
};
Race langobard_race = Race::dinan; 

int main() {
    Race race = Race::dinan;
    switch(race){
        case Race::dinan: {
            printf(" You work hard.");
        } break;
        case Race::teklan: {
            printf(" You are very strong");
        } break;
    default: {
        printf('Error: unknown race!');
    }
    }
}