#include <iostream>
#include <fstream>
#include "Zoo/Zoo.h"
#include "Controller.h"

using namespace std;

int main(int argc, char **argv) {

  // Process command-line arguments
  bool use_color = false;
  for (int i = 1; i < argc; i++) {
    string arg = string(argv[i]);
    if (arg == "--color" || arg == "--colour") {
      use_color = true;
    }
  }

  // Read zoo from input file
  ifstream fin;
  fin.open("zoo.in");
  Zoo zoo(fin);
  fin.close();

  Controller controller(&zoo, use_color);
  controller.DisplayMenu();

  return 0;
}
