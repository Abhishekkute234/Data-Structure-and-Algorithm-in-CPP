class Solution {
  public:
      double myPow(double x, int n) {
  if(x == 1) {
              return 1;
          }
  // Example: 1^5 = 1, 1^(-10) = 1.
  
  
          if(x == -1) {
              if(n % 2 == 0) {
                  return 1;
              } else {
                  return -1;
              }
          }
  
          double result = 1;
  // For example: x=2, n=3 → 2 * 2 * 2 = 8
          for(int i = 0; i < n; i++) {
              result *= x;
          }
  // x=2, n=-3 → 1 / 2 / 2 / 2 = 1/8
          for(int i = 0; i > n; i--) {
              result /= x;
  
              if(result == 0) {
                  return 0;
              }
          }
  
          return result;        
      }
  };