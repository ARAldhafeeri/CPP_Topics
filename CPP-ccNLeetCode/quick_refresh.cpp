#include <iostream>
#include <cstdio>
#include <string>
#include <stdio.h>
using namespace std;

struct Book {
    string book;
    Book() {
         book = "hello";
    }
};

int main() {
    Book hi;
std::cout<< hi.book<<endl;


}