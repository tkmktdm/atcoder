#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string counter = "";
  string word = "";
  int check = 0;
  cin>>s;
  while (s[check]) {
    word = "";
    if(s[check] == 'd') {
      if(s[check+5] == 'e') {
        if(s[check+7] == 'a') {
          // dream,erase*
          for(int i=check; i<=check+4; i++) {
            word+=s[i];
          }
          if(word == "dream") {
          //if(s[check+4] == 'm') {
            check+=5;
            counter="YES";
          } else {
            counter="NO";
            break;
          }
        } else {
          // dreamer
          for(int i=check; i<=check+6; i++) {
            word+=s[i];
          }
          if(word == "dreamer") {
          //if(s[check+6] == 'r') {
            check+=7;
            counter="YES";
          } else {
            counter="NO";
            break;
          }
        }
      } else {
        // dream
        for(int i=check; i<=check+4; i++) {
            word+=s[i];
        }
        if(word == "dream") {
        //if(s[check+4] == 'm') {
          check+=5;
          counter="YES";
        } else {
          counter="NO";
          break;
        }
      }
    } else if(s[check] == 'e') {
      if(s[check+5] == 'r') {
        // eraser
        for(int i=check; i<=check+5; i++) {
            word+=s[i];
        }
        if(word == "eraser") {
          check+=6;
          counter="YES";
        } else {
          counter="NO";
          break;
        }
      } else {
        // erase
        for(int i=check; i<=check+4; i++) {
          word+=s[i];
        }
        if(word == "erase") {
        //if(s[check+4] == 'e') {
          check+=5;
          counter="YES";
        } else {
          counter="NO";
          break;
        }
      }
    } else {
      counter="NO";
      break;
    }
  }
  cout<<counter<<endl;
}
