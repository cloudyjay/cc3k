#include <string>
#include "interface.h"
using namespace std;

int main(int argc, char *argv[]) {
	string map = (argc == 2)? argv[1] : "map/default.map";
	Interface main_game(map);

	main_game.playTurn();
}

