// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

/*       //Approach1
    string reverseWord(string str){
    int n =str.size();
    for(int i=0; i<n/2; i++){
        char temp= str[i];
        str[i] = str [n-i-1];
        str[n-i-1] = temp;
    }
    return str;
}
*/
        //Approach2
string reverseWord(string str){
    int end = str.size() - 1;
    for(int i = 0; i< str.size()/2; i++){
        swap(str[i], str[end]);
        end--;
    }
    return str;
}