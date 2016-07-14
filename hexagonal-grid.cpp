#include <iostream>
#include <vector>


std::vector<bool> cache;
std::vector<int> l1;
std::vector<int> l2;
bool isTop;

void recurse (int n);
bool result;
    
int main(){
  int cases;
  std::cin >> cases;
  while(cases--){
    int N;  
    result = true;
    std::cin >> N;
    l1.resize(N);
    l2.resize(N);
    cache.resize(N, false);
    char tmp;
    for(int i = 0; i < N; i++){
      std::cin >> tmp;
       l1[i] = (int) tmp - '0';    
    }
    for(int i = 0; i < N; i++){
      std::cin >> tmp;
      l2[i] = (int) tmp - '0';    
    }
    
    recurse(N-1);
    
    if(result == true && cache[N-1] == true){
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
    l1.clear();
    l2.clear();
    cache.clear();    
    
  }
  return 0;
}

void recurse (int n){
  if(n == 0){  
    if(l1[0] == l2[0]){
      cache[0] = true;
    }
    if(l1[0] == 1){
      isTop = true;
    } else {
      isTop = false;
    }
    return;
  }
  
  recurse(n-1);
  

  if(l1[n] == 1 && l2[n] == 1){ //both n black
    if(cache[n-1] == false){
      result = false;
    }
  }
  if(l2[n-1] == 1 && l1[n] == 1){
    if(cache[n-1] == false){
      result = false;
    }
  }
  
  if(cache[n-1] == true){  
    if(l1[n] == l2[n]){
      cache[n] = true;
    }
    return;
  }
      
  if(l1[n] != l2[n]){
    cache[n] = true;
  }
  return;
}
