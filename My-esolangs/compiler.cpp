#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    long long arr[1001][1001];
    int ptx = 0;
    int pty = 0;
    int ptr = arr[ptx][pty];
    for (int i = 0; i < s.length(); i++){
        switch(s[i]){
                    case '^':
                     pty++;
                     break;
                    case 'v':
                     pty--;
                     break;
                    case '<':
                     ptx--;
                     break;
                    case '>':
                     ptx++;
                     break;
                    case '+':
                     ptr++;
                     break;
                    case '-':
                     ptr--;
                     break;
                    case '=':
                     cout << ptr << endl;
                     break;
                    case '*':
                     cout << "(" << ptx << ", " << pty << ")" << endl;
                     break;
                    case '!':
                     cout << (char)ptr << endl;
                     break;
                    case '#':
                     ptr += 10;
                     break;
                    case '&':
                     ptr -= 10;
                     break;
        }
    }
return 0;
}