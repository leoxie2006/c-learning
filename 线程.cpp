// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <windows.h>

using namespace std;
bool outdoting = true; 
void outdot() 
{
	while(outdoting){
	  cout<<".";
	  Sleep(500);
	}
}


int main() 
{
	int a;
	cout<<"������"; 
  	std::thread threadOut (outdot);     // spawn new thread that calls foo()
  	//cin>> a;
  	cin.read();
  	outdoting = false;
  	threadOut.join();                // pauses until threadOut finishes

	std::cout << "�������\n";

  return 0;
}
