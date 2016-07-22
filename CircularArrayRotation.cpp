#include <iostream>
#include <vector>

int main(){
  int N, K, Q;
  std::cin >> N >> K >> Q;
  std::vector<int> nums (N);
  for(int i = 0; i < N; i++){
    std::cin >> nums[i];
  }
  int ind;
  for(int i = 0; i < Q; i++){
    std::cin >> ind;
    std::cout << nums[((ind % N) - (K % N) + 100 * N) % N] << std::endl;
  }
  return 0;
}
