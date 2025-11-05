#include "Jeu.h"
#include <iostream>


Jeu::Jeu(){
    joueurActuel = 'X';
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            plateau[i][j] = '.';
        }
    }
}

void Jeu::afficherPlateau() const {
    std::cout << "\n";
    for(int i = 0; i < 3; ++i) {
        std::cout << " ";
        for(int j = 0; j < 3; ++j) {
            std::cout << plateau[i][j];
            if(j < 2) std::cout << " | ";
        }
        std::cout << "\n";
        if(i < 2) std::cout << "---+---+---\n";
    }
    std::cout << "\n";
}

bool Jeu::jouerCoup(int ligne, int colonne){
    if(ligne >= 0 && ligne < 3 && colonne >= 0 && colonne < 3) {
        if(plateau[ligne][colonne] == '.') {
            plateau[ligne][colonne] = joueurActuel;
            return true;
        } else {
            std::cout << "Case déjà occupée. Essayez à nouveau." << std::endl;
        }
    } else {
        std::cout << "Coordonnées invalides. Essayez à nouveau." << std::endl;
    }
    return false;
}

bool Jeu::verifierVictoire() const {
    for(int i = 0; i < 3; ++i) {
        if(plateau[i][0] == joueurActuel && plateau[i][1] == joueurActuel && plateau[i][2] == joueurActuel)
            return true;
        if(plateau[0][i] == joueurActuel && plateau[1][i] == joueurActuel && plateau[2][i] == joueurActuel)
            return true;
    }
    if(plateau[0][0] == joueurActuel && plateau[1][1] == joueurActuel && plateau[2][2] == joueurActuel)
        return true;
    if(plateau[0][2] == joueurActuel && plateau[1][1] == joueurActuel && plateau[2][0] == joueurActuel)
        return true;

    return false;
}

bool Jeu::verifierEgalite() const {
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            if(plateau[i][j] == '.')
                return false;
        }
    }
    return true;
}

void Jeu::changerJoueur() {
    joueurActuel = (joueurActuel == 'X') ? 'O' : 'X';
}


void Jeu::reinitialiserJeu() {
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            plateau[i][j] = '.';
        }
    }
    joueurActuel = 'X';
}


