#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;

using namespace std;

int main(int argc, char **argv)
{
  if (argc <= 1)
  {
    cout << "error: expected file name";
    return 0;
  }
  for (int i = 1; i < argc; i++)
  {
    ifstream infile(argv[i]);
    string line;
    while (getline(infile, line))
    {
      cout << line << endl;
    }
  }
  return 0;
}