#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  bool isPrime = true;

  if (num < 2) {
    cout << "Not Prime";
    return 0;
  }

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      isPrime = false;
      break;
    }
  }
  if (isPrime) {
    cout << "Prime";
  }
  else {
    cout << "Not Prime";
  }
  return 0;
}