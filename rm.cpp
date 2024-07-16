#include <iostream>
#include <string>
#include <filesystem>
namespace fs = std::filesystem;

using namespace std;

int main(int argc, char **argv)
{
  if (argc <= 1)
  {
    cout << "error: expected directory name";
    return 0;
  }
  fs::remove_all(argv[1]);
  cout << "removed: " << argv[1];
  return 0;
}