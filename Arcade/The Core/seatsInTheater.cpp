int seatsInTheater(int nCols, int nRows, int col, int row) {
    int total = nCols * nRows;
    int overRow = row * nCols;
    int overCol = (col-1) * (nRows-row);
    return total-(overRow+overCol);
}
