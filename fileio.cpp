
// Better way to keep track of entries for lookup- could I assign an ID# to
// each entry?
#include <iostream>
#include <fstream>
#include <string>
#include "journalFunctions.cpp"

int main(){
  std::fstream myFileObject;  // create a new fstream object (can both read/write)
  std::string line;
  char choice;
  bool flag = 1;

// Improve this so you can enter/exit out of an option (e.g. press esc to exit
// out of option 1 and return to this main menu- the same for 2 and 3)
  while (flag == 1){
    std::cout << "Enter an option: \n";
    std::cout << "1. View recent journal entries\n";
    std::cout << "2. Append a new journal entry\n";
    std::cout << "3. Find old entries\n";
    std::cout << "4. Exit journal\n";

    std::cin >> choice;

    switch(choice){
      case '1':
        viewJournal(myFileObject);
        break;
      case '2':
        newEntry(myFileObject);
        break;
      case '3':
        findEntries(myFileObject);
        break;
      case '4':
        flag = 0;
        break;
      default:
        std::cout << "Issues selecting option.\n";
    }
  }

  return 0;
}
