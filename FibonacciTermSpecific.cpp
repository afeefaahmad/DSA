#include <iostream>  // 0 1 1 2 3 5 8 13...
using namespace std;
int nextTerm, num;

int main(){
    cout << "Enter the term upto which you want fibo:";
    cin >> num;
    int t1= 0,t2= 1;
    int i=1;

    while(i <= num){ 
        cout << nextTerm <<endl;
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        i++;
    }
    return 0;      
}