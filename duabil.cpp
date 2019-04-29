#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
class ngitung
{
public:
     float jumlah(float bil1, float bil2){
    return bil1+bil2;
    }
     float kurang(float bil1, float bil2){
    return bil1-bil2;
    }
     float kali(float bil1, float bil2){
    return bil1*bil2;
    }
     float bagi(float bil1, float bil2){
    if(bil2==0) {bil2=1;}
    return bil1/bil2;
    }
};
 
int main(){
    std::cout << std::fixed<< std::setprecision(2);
    ngitung ah;
    float bil1, bil2;
    int choice;
    cin>>choice;
 
    while(choice != 9){
    cin>>bil1>>bil2;
    switch(choice){
        case 1: cout<< ah.jumlah(bil1, bil2) << endl; break;
        case 2: cout<< ah.kurang(bil1, bil2) << endl; break;
        case 3: cout<< ah.kali(bil1, bil2) << endl; break;
        case 4: cout<< ah.bagi(bil1, bil2) << endl; break;
        } 
    cin>> choice;
    }
    return 0;
}
