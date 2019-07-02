
# include <iostream >
#include "math.h"
using namespace std;
void printArray(int * arr, int length){
    cout<<"[";
    for (int i=0;i<length-1;i++){
        cout<<*arr<<", ";
        arr++;
    }
    cout<<*arr<<"]";

}
    int main() {

    }
