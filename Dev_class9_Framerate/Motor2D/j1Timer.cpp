// ----------------------------------------------------
// j1Timer.cpp
// Fast timer with milisecons precision
// ----------------------------------------------------

#include "j1Timer.h"
#include "SDL\include\SDL_timer.h"

// ---------------------------------------------
j1Timer::j1Timer()
{
	Start();
}

// ---------------------------------------------
void j1Timer::Start()
{
	started_at = SDL_GetTicks();
	// TODO 1: Fill Start(), Read(), ReadSec() methods
	// they are simple, one line each!
}

// ---------------------------------------------
uint32 j1Timer::Read() const
{
	return (uint32)SDL_GetTicks()-started_at;
}

// ---------------------------------------------
float j1Timer::ReadSec() const
{
	return SDL_GetTicks()-started_at;
}