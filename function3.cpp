#include <iostream>
using namespace std;


// even -> true; odd -> false
bool isEven(int n) {
    if(n % 2 == 0) {
        return true;
    } else { 
        return false;
    }
}

int factorial(int n) {
    int fact = 1;
    for(int i =1; i<=n; i++) {
        fact = fact * i;
    }
    cout << "factorial(" << n <<") = " <<fact << endl;
}


int main() {

    cout << isEven(40) <<endl;

    factorial(0);
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    factorial(6);

    return 0;
}