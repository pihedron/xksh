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
  cout << path;
  return 0;
}