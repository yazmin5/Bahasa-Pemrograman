#include <iostream>
#include <cstdlib>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
  
class periksa{
    long long a,b,c;
    int sum1;
  
public:
    periksa(){ a = b = 0; }
    long long selisih(long long a, long long b, long long c=0){
        if(abs(a-b) == c){
            return 1;
        }
        else return 0;
    }
 
    long long periksadulu(long long a, long long b, long long c=0){
        if(abs(a-b)>c){
            return 1;
        }
        else return 0; 
    }
};
  
  
int main(){
    vector<long long> bil;
    periksa ah;
    int k;
    long long n,a;
    int sum=0;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a;
        bil.push_back(a);
    }
 
    sort(bil.begin(),bil.end());
  
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
        if(ah.periksadulu(bil[i],bil[j],k))
            break; 
 
        if(ah.selisih(bil[i],bil[j],k)){
            sum++;
        }
    }
    }
  
    cout << sum << '\n';
  
    return 0;
}
