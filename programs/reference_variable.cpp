#include <iostream>

using namespace std;

int main(){
    int x=12;
    int & y=x;

    cout<<"the value of x is "<<x<<endl;
    cout<<"the value of y is "<<y<<endl;
    return 0;
}
