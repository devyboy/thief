#include "Player.h"

Player::Player(char ico, int x, int y, int hp, int dmg) {
    this->ico = ico;
    this->x = x;
    this->y = y;
    this->hp = hp;
    this->dmg = dmg;
    this->dead = false;
}
