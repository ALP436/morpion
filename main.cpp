#include "Jeu.h"
#include <iostream>
#include <limits>

int main() {
    Jeu jeu;
    int ligne, colonne;
    char rejouer = 'O';

    do {
        jeu.reinitialiserJeu();
        bool partieTerminee = false;

        while(!partieTerminee) {
            jeu.afficherPlateau();
            
            bool coupValide = false;
            while(!coupValide) {
                std::cout << "Joueur " << jeu.getJoueurActuel() << ", entrez votre coup (ligne et colonne, 1-3) : ";
                if(std::cin >> ligne >> colonne) {
                    coupValide = jeu.jouerCoup(ligne - 1, colonne - 1);
                    if(!coupValide) std::cout << "Veuillez réessayer.\n";
                } else {
                    std::cout << "Entrée invalide. Veuillez entrer deux nombres.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }

            if(jeu.verifierVictoire()) {
                jeu.afficherPlateau();
                std::cout << "Félicitations! Le joueur " << jeu.getJoueurActuel() << " a gagné la partie !\n";
                partieTerminee = true;
            } else if(jeu.verifierEgalite()) {
                jeu.afficherPlateau();
                std::cout << "Match nul!\n";
                partieTerminee = true;
            } else {
                jeu.changerJoueur();
            }
        }

        do {
            std::cout << "Voulez-vous rejouer ? (O/N) : ";
            std::cin >> rejouer;
            rejouer = toupper(rejouer);
            if(rejouer != 'O' && rejouer != 'N') {
                std::cout << "Réponse invalide. Veuillez taper O pour Oui ou N pour Non.\n";
            }
        } while(rejouer != 'O' && rejouer != 'N');

    } while(rejouer == 'O');

    std::cout << "Merci d'avoir joué au morpion !\n";
    return 0;
}
