#include <cstdio>

struct Element {
    Element* next{};
    void insert_after(Element* new_element) {
        new_element -> next = next; 
        next = new_element;
    }
    char prefix[2];
    short oprating_number; 
};

int main() {
    Element Element0, Element1,Element2;
    Element0.prefix[0] = 'H';
    Element0.prefix[1] = 'I';
    Element0.oprating_number = 323;
    Element0.insert_after(&Element1);
    Element1.prefix[0] = 'F';
    Element1.prefix[1] = 'K';
    Element1.oprating_number = 211;
    Element1.insert_after(&Element2);
    Element2.prefix[0] = 'A';
    Element2.prefix[1] = 'Y';
    Element2.oprating_number = 111;

}

for (Element *cursor = &Element0; cursor; cursor = cursor -> next) {
    printf("Elements %c%c-%d \n",
            cursor -> prefix[0],
            cursor -> prefix[1],
            cursor-> operating_number);
}



