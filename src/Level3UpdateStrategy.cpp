#include "Level3UpdateStrategy.h"
#include "Screen.h"
#include "Game.h"
#include "Menu.h"
#include "imgui.h"
#include "ImGuiWindow.h"
#include <iostream>

Screen* Level3UpdateStrategy::update(Screen &screen) {


	/* V�rifier la condition de victoire du niveau 1 ici. */
	if (screen.isCompleted() ) {

		/* Autres choses ici, si besoin  */

		/* On incr�mente l'indice du niveau courant.
		Le niveau courant devient le successeur de l'ancien niveau courant.
		*/
		screen.getGame()->nextLevel();

		/* On retourne un poiteur vers le nouveau niveau courant (le niveau suivant). */
		return screen.getGame()->getMenu(Menu::WIN);

	}

	/* Mises-�-jour spontan�es du niveau 1 ici. */

	/* Apr�s les modifications, on retourne un poiteur vers l'�cran courant. */
	return &screen;

}
