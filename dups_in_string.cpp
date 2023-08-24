#include <iostream>
#include <string>
#include <set>  // Include the set header

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
//   cin >> str;
    getline(cin, str);

  // Create a set to store the characters.
  set<char> char_set;

  // Iterate through the string.
  for (char c : str) {
    // If the character is not in the set, add it to the set.
    if (char_set.find(c) == char_set.end()) {
      char_set.insert(c);
    } else {
      // Otherwise, the character is a duplicate. Print it.
      cout << c << " ";
    }
  }

  cout << endl;

  return 0;
}
