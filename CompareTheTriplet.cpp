#include <iostream>


int main(){
  int a1,a2,a3,b1,b2,b3;
  int aTot = 0;
  int bTot = 0;
  std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
  if(a1 > b1){
    aTot++;
  } else if (a1 < b1){
    bTot++;
  }
  if(a2 > b2){
    aTot++;
  } else if (a2 < b2){
    bTot++;
  }
  if(a3 > b3){
    aTot++;
  } else if (a3 < b3){
    bTot++;
  }
  std::cout << aTot << " " << bTot << std::endl;
  return 0;
}
