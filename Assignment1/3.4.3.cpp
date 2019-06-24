
# include <iostream >
#include <iostream>

using namespace std;


 int main ()
 {
     int n;
     bool flag;flag=true;
     while (flag){
         int x;
        cin>>n;
        if (n>=0 or n%5==0)
            cout<<n/5;
        if (n<0){
            flag=false;cout<<"Goodbye!";
        }
     }
 return 0;
 }

