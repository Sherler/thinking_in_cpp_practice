#include "iostream"
using namespace std;

bool is_prime_number(int a){
    if(a==2){
        return true;
    }
    if(a<2){
        return false;
    }
    for(int i=2; i<a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

void findPrimeNumber(int max){
    
    for(int i=2; i<=max;i++ ){
        if (is_prime_number(i)){
            cout <<"prime number below "<< max <<" : " <<i <<endl;
        }
    }
}

int main(){
    int max_number=-1;
    while (true){
        cout << "type in the max number of this prime number find tasks :" << endl;
        cin >> max_number;
        if (max_number<=0){
            cout << "illegal input, try again please! " <<endl;
        }else{
            break;
        }
    }
    
    findPrimeNumber(max_number);
}