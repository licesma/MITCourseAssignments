
# include <iostream >
#include "math.h"
using namespace std;

const int ARRAY_LEN=10;
int sum(const int numbers [],const  int length, int i=0){
   if (i<length){
       return numbers[i]+ sum (numbers,length,i+1);
   }else{
       return 0;    
   }
}




    int main() {
int  numbers[3];
numbers[0]=1;
numbers[1]=2;
numbers[2]=3;
cout<<sum(numbers,3);


         return 0;
    }
