
#include <bits/stdc++.h>

#include <fstream>
using namespace std;

int main()
{
  vector<int> arr(5); // A vector of size 5

  cout << "Enter 5 numbers: ";

  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i]; // take input into vector
  }

  // open file
  ofstream fout("vector_file.txt");

  if (!fout)
  {
    cerr << "Error opening file!" << endl;
    return 1;
  }

  fout << "original data: ";

  for (int i = 0; i < 5; i++)
  {
    fout << arr[i] << " "; // write each element to file
  }

  fout << "\n sorted data ";

  sort(arr.begin(), arr.end()); // sorting

  for (int i = 0; i < 5; i++)
  {
    fout << arr[i] << " "; // write each element to file
  }
  cout << "Data written to vector_file.txt successfully!" << endl;
  fout.close();
  return 0;
}
