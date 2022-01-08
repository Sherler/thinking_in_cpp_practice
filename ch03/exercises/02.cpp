#include<iostream>
using namespace std;
int main(){
    int c;
    cin >> c;
    if (c<2){
      cout <<c <<" is not a legal number. " << endl;
      return 0;
    }else if (c==2){
      cout <<c <<" is a prime number. " << endl;
      return 0;
    }
    for (int i = 2; i<c;i++){
	bool is_prime = true;
        for (int j=2; j<i;j++){
	    if (i%j==0){
		is_prime=false;
		break;
	    }
	}
	if (is_prime){
            cout << i <<" is a prime number. " << endl;
	}
    }
    return 0;
}
