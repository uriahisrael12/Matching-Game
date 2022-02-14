#include <iostream>
using namespace std;  //Input Output device activated along with the namespace "std::..."

int rows, columns, rows2, columns2, position;
int i, j;
int main()
{
  
  int arrayU[5][5];
  
  for (int i=0; i < 5; i++)
  {
    for (int j=0; j<5; j++)
    {
      
      cout << "Enter a Value: ";
      cin >> arrayU[i][j];
    
    }
    
  }
  cout << "Enter the position values: ";
  cin >> rows >> columns;
  cout << "Enter the second position values: ";
  cin >> rows2 >> columns2;
  cout << arrayU[i][j];
  

  
}