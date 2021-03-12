//Author: Brad Farris
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 

int main(){

   //variables
  string fileName = "";
  fstream fileReader;
  ofstream file;
  int userColor1 = 0, userColor2 = 0, userColor3 = 0; //input for each color (RGB) 0-255)
  int fiveColors1 = 0; //five additional colors that don't conflict w/ colorblind
  char repeat; // choose another color (y/n)


  cout << "Choose 3 color values (Red,Green,Blue) to save to a file (From 0-255):\n" << endl;
  cout << "Enter the 'Red' value. \n";
    do{
      cin >> userColor1;
      if (userColor1 >= 0 && userColor1 <= 255){
      cout << "\nEnter the 'Green' value. \n";
      }
      else{
      cout << "This value was not between 0-255. Please enter another value.\n";
      }
    } while (userColor1 < 0 || userColor1 > 255);
    do{
      cin >> userColor2;
      if (userColor2 >= 0 && userColor2 <= 255){
      cout << "\nEnter the 'Blue' value. \n";
      }
      else{
      cout << "This value was not between 0-255. Please enter another value.\n";
      }
    } while (userColor2 < 0 || userColor2 > 255);
    do{
      cin >> userColor3;
      if (userColor3 >= 0 && userColor3 <= 255){
      cout << "\nChoose a name for the file. \n";
      }
      else{
      cout << "This value was not between 0-255. Please enter another value.\n";
      }
    } while (userColor3 < 0 || userColor3 > 255);
  cin >> fileName;
  
  //file i/o
  getline (cin, fileName);
  file.open (fileName, ios::in);

  return 0;
}
