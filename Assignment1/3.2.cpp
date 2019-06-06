
# include <iostream >
#include <iostream>

using namespace std;

 int main ()
 {
 int n;
 cin>>n;
 if (n>0){
     int i,num,max,min,sum;sum=0;
     bool firstTime;firstTime=true;
     for (i=0;i<n;i++){
         cin>>num;
         if (firstTime){
             max=num;
             min=num;
             firstTime=false;
         }else{
             if (num>max){
                 max=num;
             }else if(num<min){
                     min=num;
                 }
             }
         sum=sum+num;
         }
     double mean;mean=sum/n;
     cout<<"Mean: "<<mean<<"\nMax: "<<max<<"\nMin:"<<min<<"\nRange:"<<max-min;

     }


 return 0;
 }

