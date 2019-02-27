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

void bar(int x)
{
  cout<<"bar\n";
}

int main() 
{
	int a;
	cout<<"ÇëÊäÈë"; 
  	std::thread threadOut (outdot);     // spawn new thread that calls foo()
  	cin>> a;
  	outdoting = false;
  	threadOut.join();                // pauses until first finishes

	std::cout << "³ÌÐò½áÊø\n";

  return 0;
}
