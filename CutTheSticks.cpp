#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int N;
  std::cin >> N;
  std::vector<int> sticks;
  int val;
  for(int i = 0; i < N; i++){
    std::cin >> val;
    auto it = std::upper_bound(sticks.begin(), sticks.end(), val);
    sticks.insert(it, val);
  }
  
  
  int acc = 0;
  while(!sticks.empty()){
    
    if(sticks[0] <= acc){
      sticks.erase(sticks.begin());
      continue;
    }
    acc = sticks[0];
    std::cout << sticks.size() << std::endl;
  }
  
  return 0;
}
