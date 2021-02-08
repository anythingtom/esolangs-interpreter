//Made by: Billlam
#include <iostream>

using namespace std;
int main(){
    int a = 0;
    string s;
    cin >> s;
    cout << endl;
    for (int i = 0; i < s.length(); i++){
        switch(s[i]){
            case 'A':
             a++;
             break;
            case 'B':
             a--;
             break;
            case 'C':
             cin >> a;
             break;
            case 'D':
             cout << a << endl;
             break; 
        }
    }
    return 0;
}
