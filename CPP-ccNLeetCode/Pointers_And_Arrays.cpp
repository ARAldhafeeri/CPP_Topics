#include <cstdio>
// a way to declare a dynamic array ? 
struct College {
    char name[256];
};
class MyCollages {
    public:
        void print_names(College* colleges, size_t n_collages){
            /*
            Accept an array into two arrguments.
            1) a pointer to the first College element
            2) The number of elements n_collages
            */
            for (size_t i = 0; i< n_collages; i++) {
            printf("%s College\n", colleges[i].name);
    }
}
};

int main() {
    College oxford[] = {"Magdalen","Nuffield","kellogg"};
    MyCollages collages;
    collages.print_names(oxford, sizeof(oxford) / sizeof(College));
}