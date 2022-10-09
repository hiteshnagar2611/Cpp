#include <iostream>
using namespace std;

int glo=8;//global variale
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=10;//local variable
    glo=12;
    sum();
    cout<<glo;
    return 0;
}
