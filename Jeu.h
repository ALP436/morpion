#ifndef JEU_H
#define JEU_H

class Jeu {
    public :
        Jeu();

        void afficherPlateau() const;
        bool jouerCoup(int ligne, int colonne);
        bool verifierVictoire() const;
        bool verifierEgalite() const;
        void changerJoueur();
        void reinitialiserJeu();
        char getJoueurActuel() const{return joueurActuel;};

    private :
        char plateau[3][3];
        char joueurActuel;
};

#endif // JEU_H