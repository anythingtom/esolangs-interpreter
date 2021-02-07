//Credits: I don't know who made this

#include <iostream>

using namespace std;

bool checkpmemdas(string s){
    bool b = true;
    for (int i = 0; i < s.length(); i++){
        if((s[i] == '+') || (s[i] == '-') || (s[i] == '=') || (s[i] == '*') || (s[i] == '/') || (s[i] == '!') || (s[i] == '&') || (s[i] == '#')){
            b = true;
        }
        else {
            b = false;
            break;
        }
    }
    return b;
}

int main(){
    int a = 0;
    string code;
    cin >> code;
    cout << endl;
    if (checkpmemdas(code) == false){
        cout << "ERROR: Invalid syntax";
        return 0;
    }
    for (int i = 0; i < code.length(); i++){
        switch(code[i]){
            case '+':
             a += 1;
             break;
            case '-':
             a -= 1;
             break;
            case '=':
             cout << a;
             break;
            case '*':
             cout << char(a);
             break;
            case '/':
             a = 0;
             break;
            case '!':
             a += 10;
             break;
            case '&':
             a -= 10;
             break;
            case '#':
             cout << endl;
             break;
        }
    }
}
