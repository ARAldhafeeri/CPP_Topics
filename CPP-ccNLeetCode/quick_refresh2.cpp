#include <cstdio>

struct College {
    char name[256];
};
class MyColleges{
    public:
        void print_names(College* college, size_t n_colleges){
                for( size_t i=0; i < n_colleges; i++){
                 printf("%s",college[i].name);
        }
    }
};

int main(){

    College cplusplus[] = {"hello","C++", "I love you"};
    MyColleges Colleges;
        Colleges.print_names(cplusplus, sizeof(cplusplus)/sizeof(College));
}