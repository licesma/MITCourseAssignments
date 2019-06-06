
# include <iostream >
#include <iostream>

using namespace std;

void primos(int &n,int num){
    if (n!=0) {
        int div=num/2;
        while (div != 1 && num % div != 0) {
            div--;
        }
        if (div == 1) {
            cout << num<<"\n";
        }
        n--;
        primos(n, num+1);
    }
}
 int main ()
 {
     int n;
     cin>>n;
     primos(n,2);
 return 0;
 }

