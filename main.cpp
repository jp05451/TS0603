#include "NumberGame.h"
using namespace std;
int main() 
{
	NumberGame Game;
	Game.SetInput(22222222);
	Game.ProcessInput();
	Game.SetFileName("number.txt");
	Game.LoadNumberList();
	Game.PrintAllValid();

	Game.Reset();
	cout << "\n";
	
	Game.SetInput(1234);
	Game.ProcessInput();
	Game.SetFileName("number.txt");
	Game.LoadNumberList();
	Game.PrintAllValid();
	return 0;
}