#include <iostream>
using namespace std;

int main(){
    int factorial=1,num;
    int i=1;
    cout << "Enter Number whose factorial is needed:"<< endl;
    cin >> num;
    cout << "Factorial of "<< num <<" is"<<endl;
    while(i<=num){
        factorial= factorial * i;
        i++;
    }
    cout << factorial;
return 0;
}
