#include "Step.h"

Step::Step() : IModule(0, Category::MOVEMENT, "Increases your step height") {
}

Step::~Step() {
}

const char* Step::getModuleName() {
	return ("Step");
}

void Step::onTick(C_GameMode* gm) {
	gm->player->stepHeight = 2;
}
void Step::onDisable() {
	if (g_Data.getLocalPlayer() != nullptr)
		g_Data.getLocalPlayer()->stepHeight = 0.5625f;
}
