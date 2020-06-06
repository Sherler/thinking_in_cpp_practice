#include "ex1.h"
#include<iostream>

using namespace std;

void test1(int a, char b){
    cout<<"test1 called args: a-"<< a <<" b-"<<b<<endl;
}
int test2(){
    cout<<"test2 called args: void"<<endl;
    return 2;
}

char test3(int c, float d){
    cout<<"test3 called args: int c-"<<c <<" float d-"<< d << endl;
    return '3';
}

float multipl(float e, float f){
    cout<<"multipl fun is called args: float e-"<< e <<" float f-"<< f <<endl;
    return e*f;
}