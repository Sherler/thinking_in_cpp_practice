#include <iostream>
using namespace std;

int main(){
    int i=99;
    void *vp = &i;
    
    cout<< i << endl;
    *((int*)vp) = 3;    
    
    cout<< i << endl;

}
