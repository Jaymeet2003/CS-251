//
// Lab 1: C++ program to echo the contents of a file
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   string filename;
   
   cout << "please enter filename> ";
   cin >> filename;  // input filename:
   cout << endl;

  string line;
  int count = 1;
  
   ifstream myfile;
  myfile.open(filename);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout <<"line "<< count << ": " <<line << '\n';
      count ++;
    }
    myfile.close();
  }

  else cout << "**file not found"; 

  return 0;
}