# 🧩 Morpion en C++

## 📖 Description

Ce projet est une implémentation simple du célèbre jeu du **Morpion (Tic-Tac-Toe)** en **C++**, jouable directement dans le terminal.  
Deux joueurs s’affrontent tour à tour sur une grille 3x3, en essayant d’aligner trois symboles identiques (X ou O) horizontalement, verticalement ou en diagonale.  
Le jeu gère les tours, les conditions de victoire, les matchs nuls et propose de rejouer une nouvelle partie après chaque manche.

---

## ⚙️ Fonctionnalités

- 🎮 Jeu à deux joueurs (X et O) en mode console.  
- ✅ Vérification automatique de la victoire ou du match nul.  
- 🔄 Possibilité de rejouer sans relancer le programme.  
- 🧼 Réinitialisation automatique du plateau entre les parties.  
- 💡 Code structuré avec classes (`Jeu.h` / `Jeu.cpp` / `main.cpp`).  

---

## 🧠 Structure du projet

```
Morpion/
│
├── Jeu.h          # Déclaration de la classe Jeu
├── Jeu.cpp        # Implémentation des méthodes de la classe Jeu
├── main.cpp       # Point d’entrée du programme
├── .gitignore     # Ignore les fichiers inutiles (.exe, etc.)
└── README.md      # Ce fichier
```

---

## 🚀 Compilation et exécution

Assure-toi d’avoir un compilateur C++ (comme `g++`) installé.  
Depuis la racine du projet, exécute :

```bash
g++ main.cpp Jeu.cpp -o morpion
```

Puis lance le programme :

```bash
./morpion
```

Sous Windows :
```bash
morpion.exe
```

---

## 🧩 Règles du jeu

1. Le joueur **X** commence toujours.  
2. Chaque joueur saisit la **ligne** et la **colonne** (1 à 3) où il souhaite jouer.  
3. Le programme vérifie automatiquement :
   - la **victoire** (3 symboles alignés),
   - ou le **match nul** (grille pleine).  
4. À la fin d’une partie, il est proposé de rejouer ou de quitter.

---

## 💡 Améliorations possibles

- 🤖 Ajouter une **IA** simple (joueur contre ordinateur).  
- 🧠 Implémenter un mode **IA Minimax** pour une version imbattable.  
- 🖥️ Créer une **interface graphique** avec SFML ou Qt.  
- 💾 Sauvegarder les scores ou l’historique des parties.

---
