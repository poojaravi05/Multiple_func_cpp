#include <iostream>
#include <cmath>

// Add definitions here:
double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

int two_power(int num) {
  return pow(num, 2);
}

bool is_palindrome(std::string text) {
  std::string reversed_text = "";
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) {
    return true;
  }
  
  return false;
}
