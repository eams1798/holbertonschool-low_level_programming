#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Pokemon
{
private:
	int index; //for pokedex
	int hp, atk, def, spat, spdf, spd; //stats
	char *name;
	char *nickname;
	char *gender; // male, female or ungendered
	char type[][]; //1 or 2
	char movements[][]; // 1 to 4
	char *status; //normal, poisoned, frozen, burned, etc.
public:
	Pokemon( /*all attributes*/) {
		/*initialize the object with the required attributes*/} //it's a constructor
	int gethp();
	char *getname();
	void sethp(int n);
	void setnickname(char *s);
	int getatk();
	void setatk(int n);
	void levelup();
	char *getmov(int idx);
}

int Pokemon::gethp() { return hp; }
char *Pokemon::getname() { return name; }
void Pokemon::sethp(int n) { hp = n; }
void Pokemon::setnickname(char *s) {nickname = s; }
int Pokemon::getatk() { return atk; }
void Pokemon::setatk(int n) { atk = n; }
void Pokemon::levelup() {sethp(hp + 5); setatk(atk + 10);/*update all the other stats*/}
char *Pokemon::getmov(int idx) { return movements[idx]; } /*if you want to attack a enemy*/

class Dinamax :public Pokemon
{
private:
	char DinaMoves[][];
	char *specialability;
public:
	Dinamax(/*Dinamoves, specialability*/) {}
	char *getDinaMov(int idx);
	char *getSpAb();
	void *upgradestats();
}

char *Dinamax::getDinaMov(int idx) { return DinaMoves[idx]; }
char *Dinamax::getSpAb() { return specialability; }
void *Dinamax::upgradestats() { setatk(getatk() * 2); sethp(gethp() * 2); }
