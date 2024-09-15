#include <iostream>
using namespace std;

template <typename T>
T myAdd(T x,T y){
   
    T a = x+y;
    return a;
}

int main(){
    cout<<myAdd<int>(3,7)<<endl;
    cout<<myAdd<float>(8.1,7.6)<<endl;
    cout<<myAdd<string>("Suc","hit")<<endl;
    return 0;
}