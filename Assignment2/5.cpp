
# include <iostream >
#include "math.h"
using namespace std;
int const radio=500;
class Dart{
public: double x,y;
public:Dart(){
   x =rand()%(radio);
   y=rand()%(radio);
}

};


double getPi(){
    Dart *d;double distance;
    int count;count=0;
    for (int i=0;i<100000;i++){
        d= new Dart();
        distance= sqrt(pow(d->x,2)+ (pow(d->y,2)));

        if (distance<=radio) {
            count++;

        }

    }
    return ((pow(radio*2,2)*count)/100000)/pow(radio,2);

}
    int main() {

    }
