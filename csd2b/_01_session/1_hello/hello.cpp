#include <iostream>
#include <string>

/* Session content
 * [DISCUSS]
 * - main
 */

using namespace std;

int main () {
  // standard template library, namespace std
  std::cout << "Hello, what is your name?" << std::endl;

  std::string yourName;
  std::cin >> yourName;

  std::cout << "Hi " << yourName << std::endl;
}
