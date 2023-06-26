#include <iostream>
#include <string>
#include <vector>
#include "matrixPrinter.h"

using namespace std;

namespace matrixPrinter {
    void drawBoard(vector<string> cells, int colNumber, int rowNumber, int boldCol, int boldRow) { 
        const string colLabelChars[26] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", 
                                        "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" }; // instead of map
        
        if(boldCol == 0) boldCol = colNumber;
        if(boldRow == 0) boldRow = rowNumber;

        cout << "   ";
        for(int c = 0; c < colNumber; c++) {
            cout << "  " << colLabelChars[c] << " ";
        }
        cout << endl << "   ┌";
        for(int c = 0; c < colNumber-1; c++) {
            if((c+1) % boldCol == 0) {
                cout << "───┰";
            } else {
                cout << "───┬";
            }
        }
        cout << "───┐" << endl
             << " 1 │";
        for(int r = 0; r < rowNumber; r++) {
            // Looping through rows
            for(int c = 0; c < colNumber; c++) {
                // Looping through col
                // colNumber*cr is the cell of the first column in the row
                // with the column number added you get the cell index
                if((c+1) % boldCol == 0 && c != colNumber-1) {
                    cout << " " << cells[colNumber*r+c] << " ┃";
                } else {
                    cout << " " << cells[colNumber*r+c] << " │";
                } 
            }
            if(r < rowNumber-1) { 
                if((r+1) % boldRow == 0) {
                    cout << endl << "   ┝";
                    for(int c = 0; c < colNumber-1; c++) {
                        if((c+1) % boldCol == 0) {
                            cout << "━━━╋";
                        } else {
                            cout << "━━━┿";
                        }
                    }
                    cout << "━━━┥" << endl;
                } else {
                    cout << endl << "   ├";
                    for(int c = 0; c < colNumber-1; c++) {
                        if((c+1) % boldCol == 0) {
                            cout << "───╂";
                        } else {
                            cout << "───┼";
                        }
                    }
                    cout << "───┤" << endl;
                }

                cout << " " << r+2 << " │";
            } else {
                cout << endl << "   └";
                for(int c = 0; c < colNumber-1; c++) {
                    if((c+1) % boldCol == 0) {
                        cout << "───┸";
                    } else {
                        cout << "───┴";
                    }
                }
                cout << "───┘" << endl;
            }
        }
    }
}