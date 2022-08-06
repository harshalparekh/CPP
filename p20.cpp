/*
 WAP to display the string in reverse order.
 */

#include <iostream>
using namespace std;

void reverse(string str){
    for(int i=str.length(); i>=0; i--){
        cout<<str[i];
    }
}

int main() {

    string str="hakunaMAtata";
    reverse(str);
    
    return 0;
}
