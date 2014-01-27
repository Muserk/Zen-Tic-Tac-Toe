#include "CApp.h"

void CApp::OnCleanup(){
	SDL_FreeSurface(Surf_Display);
	SDL_FreeSurface(Surf_Test);
	SDL_Quit();

}