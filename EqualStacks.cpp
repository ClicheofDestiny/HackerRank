#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>

int main(){
  int tota = 0;
  int totb = 0;
  int totc = 0;
  int a, b, c;
  std::cin >> a >> b >> c;
  std::vector<int> as (a), bs (b), cs (c);
  while (a--){
    std::cin >> as[a];
    tota += as[a];
  }
  while(b--){
    std::cin >> bs[b];
    totb += bs[b];
  }
  while (c--){
    std::cin >> cs[c];
    totc += cs[c];
  }  
  while (!as.empty() || !bs.empty() || !cs.empty()){
    if (tota == totb && totb == totc){
      break;
    }
    if (tota >= totb && tota >= totc){
      tota -= *as.rbegin();
      as.erase(as.end()-1);
    } else if (totb >= tota && totb >= totc){
      totb -= *bs.rbegin();
      bs.erase(bs.end()-1);
    } else {
      totc -= *cs.rbegin();
      cs.erase(cs.end()-1);
    }
  }
  
  std::cout << tota << std::endl;
  return 0;
}
