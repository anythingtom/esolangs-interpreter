#include <iostream>
using namespace std;
int main(){
    string s;
    int a[1001][1001] = {0};
    cin >> s;
    int arr[1001][1001];
    for (int i = 0; i < 1001; i++){
        for (int j = 0; i < 1001; i++){
            arr[i][j] = 0;
        }
    }
    int ptx = 0;
    int pty = 0;
    int ptr = arr[ptx][pty];
    for (int i = 0; i < s.length(); i++){
        switch(s[i]){
                    case '^':
                     pty++; //moves pointer 1 unit upwards
                     break;
                    case 'v':
                     pty--; //moves pointer 1 unit downwards
                     break;
                    case '<':
                     ptx--; //moves pointer 1 unit leftwards
                     break;
                    case '>':
                     ptx++; //moves pointer 1 unit rightwards
                     break;
                    case '+':
                     ptr++; //increase cell value by 1
                     break;
                    case '-':
                     ptr--; //decrease cell value by 1
                     break;
                    case '=':
                     cout << ptr << endl; //prints out cell value
                     break;
                    case '*':
                     cout << "(" << ptx << ", " << pty << ")" << endl; //prints out pointer position
                     break;
                    case '!':
                     cout << (char)ptr << endl; //prints out the cell calue as ASCII character
                     break;
                    case '#':
                     ptr += 10; //increase cell value by 10
                     break;
                    case '&':
                     ptr -= 10; //decrease cell value by 10
                     break;
        }
    }
    return 0;
}
