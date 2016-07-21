#include <iostream>
#include <vector>

int main(){
  int cases;
  std::cin >> cases;
  while(cases--){
    int N;
    std::cin >> N;
    std::vector<int> nums (N);
    int tLeft = 0;
    int tRight = 0;
    bool ans = false;
    for(int i = 0; i < N; i++){
      std::cin >> nums[i];
      tRight += nums[i];
    }
    for(int i = 0; i < N; i++){
      tRight -= nums[i];
      if(tRight == tLeft){
        ans = true;
        break;
      }
      tLeft += nums[i];
    } 
       
    if(ans){
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    } 
  }
  return 0;
}
