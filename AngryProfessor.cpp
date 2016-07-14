#include <iostream>

int main(){
  int cases;
  std::cin >> cases;
  while (cases--){
    int N, K;
    std::cin >> N >> K;
    int count = 0;
    int time;
    for(int i = 0; i < N; i++){
     std::cin >> time;
     if(time <= 0){
      count++;
     }
    }
    if(count < K){
      std::cout << "YES"<< std::endl;
    } else {
      std::cout << "NO" <<std::endl;
    }
  }
  return 0;
}
