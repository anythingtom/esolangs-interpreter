#include <iostream>

using namespace std;

int main(){
 int a = 0;
 string s;
 cin >> s;
 for (int i = 0; i < s.length(); i++){
    switch(s[i]){
  case '+':
     a++;
     break;
  case '-':
     a--;
     break;
  case '_':
     a = 0;
     break;
  case 'S':
     cout << char(a) << endl;
     break;
    }
 }
 return 0;
}
