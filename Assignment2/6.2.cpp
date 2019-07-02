
# include <iostream >
#include "math.h"
using namespace std;
void reverse(int * arr, int length){
    int i,n,swap;i=0;n=length-1;
    while (i<n-i){
        swap=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=swap;
        i++;
    }
}

int main() {

}
