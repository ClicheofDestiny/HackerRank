#include <iostream>
#include <vector>
#include <set>
#include <iterator>

int main(){
  int cases;
  std::cin >> cases;
  while (cases--){
    int N;
    std::cin >> N;
    std::set<int> nums;
    bool possible = true;
    int total = 0;
    int curr;
    for(int i = 0; i < N; i++){
      std::cin >> curr;
      nums.insert(curr);
      auto it = nums.find(curr);
      total += std::distance(it, nums.end())-1;
 
      if(curr > i + 3){
        possible = false;
      }   
    }
    
    if(possible){
      std::cout << total << std::endl;
    } else {
     std::cout << "Too chaotic" << std::endl;
 
    }
  }
  return 0;
}
