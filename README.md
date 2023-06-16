# MatrixPrinter

This C++ project prints out a matrix with a custom number of columns and rows.
The rows are labeled with numbers and the columns are labeled with the 26 letters.

<br>

## How to use

First, include the header file of MatrixPrinter. (You can find it inside the src folder in the GitHub repository.)<br>
For example, if you have the following project structure:
```
- includes/
  - matrixPrinter.h
- src/
  - project.cpp
```
you need to add the following line next to your other includes:<br>
`#include "../includes/matrixPrinter.h"`

<br>

To draw a matrix the function `drawBoard()` inside the namespace `matrixPrinter` is used.

<br>
<br>

#### The function requires the following parameters:<br>

- A vector variable, which has elements of type string. Inside this variable are the characters in each cell from left to right, top to bottom.
- The number of rows stored as an integer.<br>
- The number of columns stored as an integer.<br>


*Example:*
```c++
vector<string> cells = { "1", "2", "3", 
                         "4", " ", "6",  
                         "7", "8", "9" };
int rows = 3;
int cols = 3;

matrixPrinter::drawBoard(cells, rows, cols);
```

When the function is called, the console output should look like this:
```
     A   B   C 
   ┌───┬───┬───┐
 1 │ 1 │ 2 │ 3 │
   ├───┼───┼───┤
 2 │ 6 │   │ 4 │
   ├───┼───┼───┤
 3 │ 7 │ 8 │ 9 │
   └───┴───┴───┘
```

<br>

## Building your project

When you build your project the library needs to be linked properly, otherwise you will recieve errors.<br>
Using the following project structure:
```
- includes/
  - matrixPrinter.h
- lib/
  - libMatrixPrinter.a
- out/
- src/
  - project.cpp
```
this is how you would build your project with the library using g++ on linux:<br>
`g++ -L/path/to/ProjectFolder/lib /path/to/ProjectFolder/src/project.cpp -o /path/to/ProjectFolder/out/projectOut -lMatrixPrinter`
<br><br>
The compiled library can be found inside the GitHub repository (`out/libMatrixPrinter.a`), otherwise you will need to build it yourself.
