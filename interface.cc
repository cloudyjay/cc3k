#include "interface.h"
using namespace std;

/******************* PRIVATE ************************/
void Interface::playTurn() {

	
	game_floors[cur_lvl]->printFloor();
}

/******************* PUBLIC ************************/
Interface::Interface(string map_name, int max_lvl) : MAX_LVL(max_lvl), cur_lvl(0), MAP_NAME(map_name) {
	// allocate & build floors
	game_floors = new Floor*[MAX_LVL];
	for(int i=0; i < MAX_LVL; i++) {
		game_floors[i] = new Floor(MAP_NAME);
	}
}

Interface::~Interface() {
	for(int i=0; i < MAX_LVL; i++) {
		delete game_floors[i];
	}
	delete[] game_floors;
}

bool Interface::isEnd() {
	if(MAX_LVL <= cur_lvl) {
		return true;
	}
	else {
		return false;
	}
}
