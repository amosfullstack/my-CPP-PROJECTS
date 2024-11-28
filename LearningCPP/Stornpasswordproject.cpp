#include <iostream>
#include <cstring>
using namespace std;

bool isStrongPassword(const char* password) {
  int minLength = 8;
  bool hasDigit = false;
  bool hasLower = false;
  bool hasUpper = false;

  int length = strlen(password);
  if (length < minLength) {
    return false;
  }

  for (int i = 0; i < length; ++i) {
    char c = password[i];
    if (c >= '0' && c <= '9') {
      hasDigit = true;
    } else if (c >= 'a' && c <= 'z') {
      hasLower = true;
    } else if (c >= 'A' && c <= 'Z') {
      hasUpper = true;
    }
  }

  return hasDigit && hasLower && hasUpper;
}

int main() {
  char password[80]; // Adjust size as needed

  cout << "Enter your password: ";
  cin.getline(password, sizeof(password));

  if (isStrongPassword(password)) {
    cout << "The password is strong." << endl;
  } else {
    cout << "The password is not strong. It should be at least 8 characters and contain at least one digit, one lowercase letter, and one uppercase letter." << endl;
  }

  return 0;
}

