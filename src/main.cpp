#include <iostream>
#include <fstream>
#include "zoo/zoo.h"
#include "controller.h"
#include "stdlib.h"

using namespace std;

int main(int argc, char **argv) {

  // Seed random generator with constant value to facilitate testing. DEBUG
  srand(123);

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
  fin.open("zoo.txt");
  Zoo zoo(fin);
  fin.close();

  Controller controller(&zoo, use_color);
  controller.DisplayMenu();

  return 0;
}
