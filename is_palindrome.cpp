#include <iostream>

// Define is_palindrome() here:

bool is_palindrome(std::string text) {

  std::string inverted_text;

  for (int i = text.size(); i >= 0; i--) {
      inverted_text += text[i];
  }

  if (inverted_text == text) {
    return true;
  }
  return false;

}

int main() {

  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}
