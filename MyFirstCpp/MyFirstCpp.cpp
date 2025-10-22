#include <iostream>


#include<iomanip>// for setw(int)  set width
using namespace std;

//as 1  2  3
 //  4  5  6


void PrintMatrix(int arr[3][3], short Rows, short Cols) { 
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) { 

         //   printf(" %0*d   ", 2, arr[i][j]);
          cout <<setw(3)<< arr[i][j] ;
         }   
        cout << "\n"; 
    } 
}


    
bool IsScalarMatrix(int arr[3][3],  int Row, int Col) {


    int FirstDiagElement = arr[0][0];
    for (short i = 0; i < Row; i++) {
        for (short j = 0; j < Col; j++) {


            if (i==j&&arr[i][j]!=FirstDiagElement) {

                return false;
            }


            if (i != j && arr[i][j] != 0) {

                return false;
            }


        }
    }

    return true;

}




int main() {
    srand((unsigned)time(NULL));

    int arr[3][3]{  
        {9,0,0},
        {0,9,0}, 
        {0,0,9}
       
    };

   // int arr[3][3]{  { 9, 0, 0 },{ 0,9,0 },{ 0,0,3 } };

    PrintMatrix(arr, 3, 3);

    
    if (IsScalarMatrix(arr, 3, 3)) {


        cout << " Yes, it is an scalar matrix\n";
    }
    else {


        cout << "No ,it is not an scalar matrix \n";
    }

    
   system("pause>0");
    return 0;
}
