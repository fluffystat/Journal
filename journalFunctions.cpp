#include <iostream>
#include <fstream>
#include <string>

// Takes ref to file object as argument, opens associated file for reading;
// finds last couple of entries and prints them to stdout.
void viewJournal(std::fstream &fileObject){
  std::string line;

  std::cout << "Recent journal entries: \n";

  fileObject.open("journal.txt", std::fstream::in);  // open file for reading
  if(fileObject.is_open()){
    while(fileObject){  // while object's property is "true"..
      getline(fileObject, line);  // store input in string
      std::cout << line << std::endl;  // print that string
    }
    fileObject.close();
  } else {
    std::cout << "Trouble opening journal.\n";
  }
}

// Takes ref to file object as argument, opens associated file for appending,
// and copies into it whatever user types until escape key pressed. Automatically
// appends current date/time as header.
void newEntry(std::fstream &fileObject){
  std::string line;

  std::cout << "Enter text below; press esc key to return to menu.\n";

  fileObject.open("journal.txt", std::fstream::app);  // open file for appending
  if(fileObject.is_open()){
    getline(std::cin, line, '0');  // esc key as delim?
    fileObject << line;
    fileObject.close();
  } else {
    std::cout << "Trouble opening journal.\n";
  }
}

// Takes ref to file object as argument, opens associated file for reading,
// uses keywords, date/time range, or both to find entries.
void findEntries(std::fstream &fileObject){
  std::cout << "findEntries was called.\n";

}
