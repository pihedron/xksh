#include <iostream>
#include <string>
#include <windows.h>
#include <filesystem>
namespace fs = std::filesystem;

using namespace std;

int main(int argc, char **argv)
{
  char buf[256];
  GetCurrentDirectoryA(256, buf);
  string path = string(buf);
  for (const auto &entry : fs::directory_iterator(path))
  {
    cout << entry.path().u8string().substr(path.size() + 1);
    if (entry.is_directory())
    {
      cout << "/";
    }
    cout << endl;
  }
  return 0;
}