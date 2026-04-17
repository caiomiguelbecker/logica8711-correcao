#include <iostream>
#include<string>

int main()
{
  std::cout << "\nHello user\n"<< std::endl;

  std::cout << "You this node my system. " << std::endl;
  std::cout << "The objetive test my knowledge.\n\n " << std::endl;

  std:: string name;
  int age;
  float height;

  std::cout<<"what's your name? "<<std::endl;
  std::cin>>name;
  std::cout<<"How old are you? "<<std::endl;
  std::cin>>age;
  std::cout<<"How tall are you? "<<std::endl;
  std::cin>>height;

  std::cout<<"\n\nYour name and: "<<name<<std::endl;
  std::cout<<"Your age and: "<<age<<std::endl;
  std::cout<<"Its height and: "<<height<<std::endl;

  char response;

  std::cout<<"Do you want to register to join the application? (y/n)"<<std::endl;
  std::cin>>response;

  if(response == 'y' || response == 'Y'){
    std::cout<<"welcome to the system!!"<<std::endl;
    
  }
  else if(response == 'n' || response == 'N'){
    std::cout<<"Thank you for using the system."<<std::endl;
  }
  else {
    std::cout<<"Invalid option."<<std::endl;
  }
  


  return 0;
}