#include <iostream>
using namespace std;

/*
* given two arrays merge them in sorted order.
array a, array b
*/

int main() {
int a[] = {4,26,1,552,23,35,2};
int b[] = {2,3,4,562,23,351,1,2,62,23};
int * answer;
int size_answer = sizeof(a) + sizeof(b);
answer = new int [size_answer];
int i = 0; 
int j = 0;

while(i < sizeof(a) || j < sizeof(b) ) {
    if( j == sizeof(b) || ( i < sizeof(a) && a[i] < b[j]))
        answer[i] = a[i++];

   
} else
        {
            answer[j] = b[j++];
        }
    
size_t n = sizeof(answer)/ sizeof(answer[0]);

for(size_t k =0; k < n; k++){
    std:cout << answer[k]<< ' ';
}
return 0;
}
