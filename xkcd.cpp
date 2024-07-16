#include <iostream>
#include <windows.h>
#include <shellapi.h>

using namespace std;

int main(int argc, char **argv)
{
  if (argc <= 1)
  {
    cout << "error: expected comic number";
    return 0;
  }
  string url = "https://xkcd.com/";
  url.append(argv[1]);
  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW); // ignore error 167
  return 0;
}