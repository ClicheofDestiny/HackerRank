#include <iostream>
#include <string>
#include <vector>

int main(){
  int N;
  std::cin >> N;
  std::string str;
  std::vector<int> beforeStr;
  std::getline(std::cin, str);
  
  std::getline(std::cin, str);
  for(int i = 0; i < N; i++){
    beforeStr.push_back(str[i]);
  }
  
  int K;
  std::cin >> K;
  K = K % 26;
  
  for(int i = 0; i < N; i++){
    if(beforeStr[i] >= 'a' && beforeStr[i] <= 'z'){
      beforeStr[i] += K;
      if (beforeStr[i] > 'z') beforeStr[i] -= 26;
    } else if(beforeStr[i] >= 'A' && beforeStr[i] <= 'Z'){
      beforeStr[i] += K;
      if (beforeStr[i] > 'Z') beforeStr[i] -= 26;
    }
    std::cout << (char) beforeStr[i];        
  }

  std::cout << std::endl;

  return 0;
}


