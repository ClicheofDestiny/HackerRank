#include <iostream>
#include <vector>

#include <map>

int all[201];

int main(){
  int N, K;
  std::cin >> N >> K;
  int count = 0;
  std::vector<int> nums (N);
  for(int i = 0; i < N; i++){
    std::cin >> nums[i];
    all[nums[i]/K]++;
  }
  for(int i = 0; i < N-1; i++){
    for(int j = i+1; j < N; j++){
      if((nums[i]+nums[j]) % K == 0){
        count++;
      } 
    }
  }
    
  std::cout << count << std::endl;
  return 0;
}
