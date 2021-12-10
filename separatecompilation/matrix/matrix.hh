#ifndef MATRIXH
#define MATRIXH
#include <iostream>


class matrix {
private:
  uint32_t rows, cols;
  double* m;
public:
  matrix(uint32_t rows, uint32_t cols, double v);
  ~matrix();
  matrix(const matrix& orig);
  matrix& operator =(const matrix& orig);
  matrix(matrix&& orig);
  double& operator ()(uint32_t r, uint32_t c) {
      return m[r * cols + c];
  }
  double operator ()(uint32_t r, uint32_t c) const {
      return m[r * cols + c];
  }      
  friend std::ostream& operator <<(std::ostream& s, const matrix& m);    
};
#endif
