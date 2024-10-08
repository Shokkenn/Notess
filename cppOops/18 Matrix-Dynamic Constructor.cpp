#include<iostream>
#include<string>
using namespace std;

class matrixFun{
    int **matrix;    // Pointer to a pointer to represent a 2D matrix
    int m,n;         // Variables to store the number of rows (m) and columns (n)
    public:
         matrixFun(int row, int col){
            m = row;
            n = col;
            matrix = new int*[row];     // Allocate memory for row pointers
            for(int i=0; i<row; i++){   // Allocate memory for each row
                matrix[i] = new int[col];
            }
         }

         void setVal(){
            cout << "Enter values" << endl;
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cin >> matrix[i][j];
                }
            }
         }

         void getVal(){
            cout << "Values\n";
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cout << matrix[i][j] << " ";
                    cout << endl;
                }
            }
         }

         ~matrixFun(){
            cout << "Memory has been free";
            for(int i=0; i<m; i++){ 
              delete[] matrix[i];  
            }         // Correctly deallocate each row of the matrix
            delete[] matrix;              // Correctly deallocate the array of row pointers
         
         }
};
int main(){
    int row, col;
    cout << "Enter row and column :\n";
    cin >> row >> col;
    matrixFun mat(row, col);
    mat.setVal();         // Call function to set values in the matrix
    mat.getVal();         // Call function to print values of the matrix
    return 0;
}


/*

Enter row and column :
2 3
Enter values
1  2  3
4  5  6
Values
1  2  3
4  5  6
Memory has been freed

*/