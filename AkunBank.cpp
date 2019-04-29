#include <iostream>
#include <iomanip>
#include <cstring>
#include <map>
  
using namespace std;
  
class transaksi
{
    map<string,int> v;
    map<string,int> ::iterator i;
    public:
        transaksi(){
            int n; string str;
            cin >> n; cin.ignore();
            while(n--){
                getline(cin,str);
                v[str]++;
            }
        }
        void printTrans(){
            for (i = v.begin(); i != v.end(); i++)
            {
                cout << (i ->first) << ' ' << (i ->second) << '\n';
            }
              
        }
};
  
  
int main(){
    int t;
    cin >> t;
    while (t--){
        transaksi tr;
        tr.printTrans();
        if (t != 0) cout << '\n';
    }
    return 0;
}
