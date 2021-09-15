#include "FastFall.h"

FastFall::FastFall() : IModule(0x0, Category::MOVEMENT, "Kinda a NoFall") {
}	

FastFall::~FastFall() {
}

const char* FastFall::getModuleName() {
	return ("FastFall");
}

void FastFall::onTick(C_GameMode* gm) {
	auto player = g_Data.getLocalPlayer();
	if (player == nullptr) return;

	if (gm->player->onGround && !gm->player->isInWater()) {
		gm->player->velocity.y = -3;
	}//epic
}