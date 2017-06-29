#ifndef ALGORITHM_H_INCLUDED
#define ALGORITHM_H_INCLUDED
#include <iostream>
#include <vector>


using namespace std;

std::vector<int> all;

void for_each(vector<int> a, void (* comp) (int)){
    comp(all.size());
    cout<<endl;
}
void all_of(vector<int> *b , int (* comp) (int)){
    for(int j = 0; j < all.size(); j++) { //
        all[j] = comp(all[j]);
    }
}
void download(int t){
    for(int c = 0; c < t; c++)
       cout << all[c]<<" ";
}
int addVector(int s){
   s = s + 2;
   return s;
}
int subtractVector(int s){
   s = s - 2;
   return s;
}
int multiplyVector(int s){
   s = s * 2;
   return s;
}
int divideVector(int s){
   s = s / 2;
   return s;
}
#endif // ALGORITHM_H_INCLUDED
