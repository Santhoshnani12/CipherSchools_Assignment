#include <iostream> 
using namespace std; 

int paths(int m, int n) 
{ 
    if (m == 1 || n == 1) 
        return 1; 
  
    return paths(m - 1, n) + paths(m, n - 1); 
} 
  
int main() 
{ 
    cout << paths(3, 3); 
    return 0; 
} 
