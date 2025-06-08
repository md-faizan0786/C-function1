#include <iostream>
using namespace std;

int sum(int a, int b) {   //a, b are parameters
    int sum = a + b;
    return sum;
}
int diff(int a, int b) {   //a, b are parameters
    int diff = a - b;
    return diff;
}
int prod(int a, int b) {   //a, b are parameters
    return a * b;
}




int main() {
    int s = sum(2, 4);    //2, 4 are arguments
    cout<< "sum = " << s << endl;

    int d = diff(4, 2);    //2, 4 are arguments
    cout<< "diff = " << d << endl;

    cout<< "prod = "<<  prod(10, 20) <<endl;

    
    return 0;
}