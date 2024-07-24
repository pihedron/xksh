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
    string relativePath = entry.path().u8string().substr(path.size());
    if (relativePath[0] == '\\')
    {
      cout << relativePath.substr(1);
    }
    else
    {
      cout << relativePath;
    }
    if (entry.is_directory())
    {
      cout << "/";
    }
    cout << endl;
  }
  return 0;
}