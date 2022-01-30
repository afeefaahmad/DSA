#include <iostream>
using namespace std;
int number,multiplication ;
int main() {
    int i=1;
    cout<< "Enter the number:";
    cin>>number;
    cout << "Table of "<<number<<" is:" << endl;
    while(i<=number){
        multiplication = number*i;
        i++;
        cout << multiplication << endl;        
    }
    return 0;
}
