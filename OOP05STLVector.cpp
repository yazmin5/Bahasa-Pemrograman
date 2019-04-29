#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
   
int main ()
{
  int x,y;
    float c=0,d=0,sum=0,sum1=0;
  vector<int> v1;                                                      
  cin >> x;
  while(x!=-9){ 
    v1.push_back(x);
    sum=sum+v1[c];
    c++;
    cin >> x;
}
    cin >> y;
    while(y!=-9){
        sum1=sum1+v1[y-1];
    d++;
    cin >> y;
}
if(c==d) {
    cout << c << " " << c-d << endl;
    cout << fixed << setprecision(2) << sum/c << " " << "-9.99" << endl;
}
else{
    cout << c << " " << c-d << endl;
    cout << fixed << setprecision(2) << sum/c << " " << (sum-sum1)/(c-d) << endl;
  }
  return 0;
}
