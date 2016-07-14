#include <iostream>
#include <vector>

#include <map>

int all[201];

int main(){
  int N, K;
  std::cin >> N >> K;
  int count = 0;
  int num;
  int res = (-5)%8;
  for(int i = 0; i < N; i++){
    std::cin >> num;
    if(num%K == 0){
      count += all[0];
    } else {
      count += all[K - (num % K)];
    }
    all[num % K]++;
  }
  std::cout << count << std::endl;
  return 0;
}
