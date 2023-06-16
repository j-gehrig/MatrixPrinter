#include <iostream>
#include <string>
#include <vector>
#include "matrixPrinter.h"

using namespace std;

namespace matrixPrinter {
    void drawBoard(vector<string> cells, int colNumber, int rowNumber) { // to do: thick lines
        const string colLabelChars[26] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", 
                                        "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" }; // instead of map
        cout << "   ";
        for(int i = 0; i < colNumber; i++) {
            cout << "  " << colLabelChars[i] << " ";
        }
        cout << endl << "   ┌";
        for(int i = 0; i < colNumber-1; i++) {
            cout << "───┬";
        }
        cout << "───┐" << endl
             << " 1 │";
        for(int r = 0; r < rowNumber; r++) {
            // Looping through rows
            for(int c = 0; c < colNumber; c++) {
                // Looping through col
                cout << " " << cells[colNumber*r+c] << " │"; 
                // colNumber*cr is the cell of the first column in the row
                // with the column number added you get the cell index
            }
            if(r < rowNumber-1) { 
                cout << endl << "   ├";
                for(int i = 0; i < colNumber-1; i++) {
                    cout << "───┼";
                }
                cout << "───┤" << endl 
                     << " " << r+2 << " │";
            } else {
                cout << endl << "   └";
                for(int i = 0; i < colNumber-1; i++) {
                    cout << "───┴";
                }
                cout << "───┘" << endl;
            }
        }
    }
}