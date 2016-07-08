#include <iostream>

int main(){
  int cases;
  std::cin >> cases;
  while(cases--){
    unsigned int N, M, S;
    std::cin >> N >> M >> S;
    unsigned int victim = (S + M - 1) % N;
    if(victim == 0){
      victim = N;
    }
    std::cout << victim << std::endl;
  }
  return 0;
}
