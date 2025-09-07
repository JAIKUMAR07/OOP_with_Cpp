#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{

  // file open

  ofstream fout;         // ye object hai
  fout.open("zoom.txt"); // path dete hai file // agr present n ho to create kr deta
  // open yaha iska member function hai

  // write krna
  fout << "Hello, this is a test file." << endl;
  fout << "Writing multiple lines to the file." << endl;

  fout.close(); // file close taki apna sara resources ko release kr sku jo is file ko handle kr rhi
  return 0;
}