#include <iostream>

int main()
{

    int mynumbers[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
   
    for(int num : mynumbers){

      std::cout<<num<<std::endl;
    }

  return 0;
}