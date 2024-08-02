#ifndef project
#define project

#include <cstdlib>
#include <ctime>
#include <string>
#include <unistd.h>
#include <random>

using namespace std;

typedef struct
{
  string name;
  int MonHP;
  int MonDam;
} monster;

#define Exp_boxrand (((float)(rand() % 7) / 10) + 1)
#define Exp_rand (rand() % 7001 - 3500)
#define Boss_rand (((float)(rand() % 40) / 10) + 1)

long get_long(void);
long get_replay(void);
void start(string name);
int select(int stage, int event, float event_Exp, long long Exp, int monster_number, int monster_WN, long long Exp_box, int level, int turn, long user);
int quarter(int level, int turn, int Exp);
void moninfo(monster *nem);

#endif