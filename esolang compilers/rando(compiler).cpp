//Made by Kamish
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    string s;
    int a = 0;
    string s;
    cin >> s;
    cout << endl;
    for (int i = 0; i < s.length(); i++){
        switch(s[i]){
            case 'r':
             a += rand() % 5;
             break;
            case 'a':
             a -= rand() % 3;
             break;
            case 'n':
             cout << a << endl;
             break;
            case 'd':
             cout << char(a) << endl;
             break;
            case 'o':
             a = 0;
             break;  
        }
    }
    if (a > 9999){
        return 0;
    }
    return 0;
}