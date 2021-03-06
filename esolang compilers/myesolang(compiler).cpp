#include <iostream>

using namespace std;

int main(){
    string s;  //put the code here
    const int k = 1; //Use this later on for a while loop
    int arr[1001][1001]; //I want it to work on a 1000000*1000000 cell grid.
    for (int i = 0; i < 1001; i++){
        for (int j = 0; j < 1001; j++){
            arr[i][j] = 0;
        }
    }
    int ptx = 0; //runs along the horizontal axis
    int pty = 0; //runs along the vertical axis
    int ptr = arr[ptx][pty];
    while (k > 0){ //this is what we use the const k for
        cout << "$ ";
        cin >> s;
        cout << endl;
        int n = s.length();
        if (s == "help"){
            cout << "This is something I randomly think about one day. Inspired by brainfuck" << endl;
            cout << "Commands are: " << endl;
            cout << " ^: moves pointer 1 unit upwards." << endl;
            cout << " v: moves pointer 1 unit downwards." << endl;
            cout << " >: moves pointer 1 unit rightwards." << endl;
            cout << " <: moves pointer 1 unit leftwards." << endl;
            cout << " +: increase the value of current cell by 1" << endl;
            cout << " -: decrease the value of the current cell by 1." << endl;
            cout << " =: prints out the value of the current cell and a new line." << endl;
            cout << " *: prints out the coordinate of the pointer." << endl;
            cout << " !: prints out the value of the current cell as an ASCII character." << endl;
            cout << " #: Increase value of current cell by 10." << endl;
            cout << " &: Decrease value of current cell by 10." << endl;
            continue;
        }
        if (s == "exit"){
            cout << "Exited successfully." << endl;
            return 0;
        }
        else if (s != "help" && s != "exit"){
            for (int i = 0; i < n; i++){
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
        }
    }
}
