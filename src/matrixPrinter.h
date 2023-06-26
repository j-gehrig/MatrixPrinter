#ifndef PRINTER_H
#define PRINTER_H

#include <string>
#include <vector>

namespace matrixPrinter {
    void drawBoard(std::vector<std::string> cells, int colNumber, int rowNumber, int boldCol = 0, int boldRow = 0);
}
#endif