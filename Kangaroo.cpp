#include <iostream>
#include <cmath>

int main(){
  double x1, v1, x2, v2;
  std::cin >> x1 >> v1 >> x2 >> v2;
  bool result;
  if(x1 > x2 && v1 > v2){
    result = false;
  } else if (x2 > x1 && v2 > v1){
    result = false;
  } else {
    double x = (x2 - x1) / (v1 - v2);
    if(x - std::floor(x) == 0){
      result = true;
    }
  }
  
  if(result == true){
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
