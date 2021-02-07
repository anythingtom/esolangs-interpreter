#include <iostream>

using namespace std;

int main(){
    long long a = 0;
    string s;
    cin >> s;
    cout << endl;
    for (int i = 0; i < s.length(); i++){
        switch(s[i]){
            case '+':
             a++; 
             break;
            case '-':
             a--; 
             break;
            case '=':
             cout << a << endl;
             break;
            default:
             break;
             cout << "Error! " << endl;
             return 0;
        }
    }
    return 0;
}
