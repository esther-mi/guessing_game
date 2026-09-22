#include <iostream>
using namespace std;

int secret_number = 10;
int guess;
int guess_count= 0;
int guess_limit = 3;
int out_of_guesses = false;

int main(){
  while(guess != secret_number && !out_of_guesses){
      if(guess_count < guess_limit){
        cout << "Enter guess:" << endl;
        cin >> guess;
        guess_count++;
      } else {
        out_of_guesses = true;
      }
  }
  if out_of_guesses{
    cout << "You Loose";
  }else{
    cout << "You Win";
  }
  return 0;
}
