# argc_argv

Ce dossier contient des exercices sur la gestion des arguments de ligne de commande en C, en utilisant les paramètres `argc` et `argv` de la fonction `main`.

## Description

En C, les arguments de ligne de commande permettent aux utilisateurs d'interagir avec les programmes lors de leur exécution. Ce dossier contient plusieurs exercices qui démontrent comment récupérer et manipuler ces arguments.

## Fichiers et fonctions

### 0-whatsmyname.c
- **Prototype**: `int main(int argc, char *argv[]);`
- **Description**: Programme qui affiche son nom, suivi d'une nouvelle ligne.
- **Comportement**: Si le programme est renommé, il affichera le nouveau nom sans recompilation.
- **Retour**: 0 en cas de succès.

### 1-args.c
- **Prototype**: `int main(int argc, char *argv[]);`
- **Description**: Programme qui affiche le nombre d'arguments passés.
- **Paramètres**: 
  - `argc`: Nombre d'arguments
  - `argv`: Tableau d'arguments (non utilisé dans ce programme)
- **Retour**: 0 en cas de succès.

### 2-args.c
- **Prototype**: `int main(int argc, char *argv[]);`
- **Description**: Programme qui affiche tous les arguments qu'il reçoit.
- **Paramètres**: 
  - `argc`: Nombre d'arguments
  - `argv`: Tableau d'arguments
- **Comportement**: Chaque argument est affiché sur une ligne séparée.
- **Retour**: 0 en cas de succès.

### 3-mul.c
- **Prototype**: `int main(int argc, char *argv[]);`
- **Description**: Programme qui multiplie deux nombres.
- **Paramètres**: 
  - `argc`: Nombre d'arguments
  - `argv`: Tableau d'arguments contenant les deux nombres à multiplier
- **Comportement**: Si le programme ne reçoit pas exactement deux arguments, il affiche "Error" et retourne 1.
- **Retour**: 0 en cas de succès, 1 en cas d'erreur.

### 4-add.c
- **Prototype**: `int main(int argc, char *argv[]);`
- **Description**: Programme qui additionne des nombres positifs.
- **Paramètres**: 
  - `argc`: Nombre d'arguments
  - `argv`: Tableau d'arguments contenant les nombres à additionner
- **Comportement**: 
  - Si aucun nombre n'est passé, affiche 0
  - Si un des arguments n'est pas un entier positif, affiche "Error" et retourne 1
- **Retour**: 0 en cas de succès, 1 en cas d'erreur.

### 100-change.c (Avancé)
- **Prototype**: `int main(int argc, char *argv[]);`
- **Description**: Programme qui calcule le nombre minimal de pièces pour rendre la monnaie.
- **Paramètres**: 
  - `argc`: Nombre d'arguments
  - `argv`: Tableau d'arguments contenant le montant à rendre
- **Comportement**: 
  - Si le nombre d'arguments est différent de 2, affiche "Error" et retourne 1
  - Si le montant est négatif, affiche 0
  - Utilise les pièces de 25, 10, 5, 2 et 1 cent
- **Retour**: 0 en cas de succès, 1 en cas d'erreur.

## Compilation

Les programmes peuvent être compilés avec GCC en utilisant les options suivantes:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o executable_name