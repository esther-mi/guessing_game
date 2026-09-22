#include iostream;
using namespace std;

int secret_num = 10;
int guess;
int guess_count = 0;
int guess_limit = 3;
int out_of_guesses = false;

int main()
{
  do{
    if (guess_count < guess_limit){
      cout << "Enter guess" << endl;
      cin >> guess;
      guess_count++;
    }else{
      out_of_guesses = true;
    }
  } while(guess != secret_num && !out_of_guesses){
    if(out_of_guesses){
      cout << "You Loose";
    }else{
      cout << "You win";
    }
  }
  return 0;
}
