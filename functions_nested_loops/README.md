# functions_nested_loops

Ce dossier contient des exercices sur les fonctions et les boucles imbriquées en C.

## Description

Les fonctions et les boucles sont des éléments fondamentaux de la programmation en C. Ce dossier regroupe des exercices qui vous permettent de maîtriser ces concepts à travers diverses implémentations.

## Fichiers et fonctions

### 0-putchar.c
- **Description**: Programme qui affiche `_putchar`, suivi d'une nouvelle ligne.
- **Retour**: 0 en cas de succès.

### 1-alphabet.c
- **Prototype**: `void print_alphabet(void);`
- **Description**: Fonction qui imprime l'alphabet en minuscules, suivi d'une nouvelle ligne.
- **Utilisation**: Utilise uniquement `_putchar` (deux fois maximum).

### 2-print_alphabet_x10.c
- **Prototype**: `void print_alphabet_x10(void);`
- **Description**: Fonction qui imprime 10 fois l'alphabet en minuscules, suivi d'une nouvelle ligne.
- **Utilisation**: Utilise uniquement `_putchar` (deux fois maximum par ligne d'alphabet).

### 3-islower.c
- **Prototype**: `int _islower(int c);`
- **Description**: Fonction qui vérifie si un caractère est une lettre minuscule.
- **Paramètres**: 
  - `c`: Le caractère à vérifier
- **Retour**: 1 si `c` est une lettre minuscule, 0 sinon.

### 4-isalpha.c
- **Prototype**: `int _isalpha(int c);`
- **Description**: Fonction qui vérifie si un caractère est une lettre (majuscule ou minuscule).
- **Paramètres**: 
  - `c`: Le caractère à vérifier
- **Retour**: 1 si `c` est une lettre, 0 sinon.

### 5-sign.c
- **Prototype**: `int print_sign(int n);`
- **Description**: Fonction qui imprime le signe d'un nombre.
- **Paramètres**: 
  - `n`: Le nombre à vérifier
- **Comportement**: 
  - Si `n` > 0: Affiche `+` et retourne 1
  - Si `n` = 0: Affiche `0` et retourne 0
  - Si `n` < 0: Affiche `-` et retourne -1

### 6-abs.c
- **Prototype**: `int _abs(int);`
- **Description**: Fonction qui calcule la valeur absolue d'un entier.
- **Paramètres**: 
  - Le nombre dont on veut la valeur absolue
- **Retour**: La valeur absolue du nombre.

### 7-print_last_digit.c
- **Prototype**: `int print_last_digit(int);`
- **Description**: Fonction qui imprime et retourne le dernier chiffre d'un nombre.
- **Paramètres**: 
  - Le nombre dont on veut le dernier chiffre
- **Retour**: La valeur du dernier chiffre.

### 8-24_hours.c
- **Prototype**: `void jack_bauer(void);`
- **Description**: Fonction qui imprime chaque minute de la journée de Jack Bauer, de 00:00 à 23:59.

### 9-times_table.c
- **Prototype**: `void times_table(void);`
- **Description**: Fonction qui imprime la table de multiplication de 0 à 9.
- **Format**: Voir exemple fourni.

### 10-add.c
- **Prototype**: `int add(int, int);`
- **Description**: Fonction qui additionne deux entiers et retourne le résultat.
- **Paramètres**: 
  - Les deux entiers à additionner
- **Retour**: Le résultat de l'addition.

### 11-print_to_98.c
- **Prototype**: `void print_to_98(int n);`
- **Description**: Fonction qui imprime tous les nombres naturels de `n` à 98.
- **Paramètres**: 
  - `n`: Le point de départ
- **Format**: Nombres séparés par une virgule et un espace, ordre croissant ou décroissant.

### 100-times_table.c (Avancé)
- **Prototype**: `void print_times_table(int n);`
- **Description**: Fonction qui imprime la table de multiplication de 0 à `n`.
- **Paramètres**: 
  - `n`: Limite de la table
- **Comportement**: Si `n` > 15 ou `n` < 0, la fonction ne fait rien.

### 101-natural.c (Avancé)
- **Description**: Programme qui calcule et imprime la somme de tous les multiples de 3 ou 5 inférieurs à 1024.
- **Retour**: 0 en cas de succès.

### 102-fibonacci.c (Avancé)
- **Description**: Programme qui imprime les 50 premiers nombres de Fibonacci.
- **Format**: Nombres séparés par une virgule et un espace.
- **Retour**: 0 en cas de succès.

### 103-fibonacci.c (Avancé)
- **Description**: Programme qui trouve et imprime la somme des termes pairs de la suite de Fibonacci inférieurs à 4 000 000.
- **Retour**: 0 en cas de succès.

### 104-fibonacci.c (Avancé)
- **Description**: Programme qui imprime les 98 premiers nombres de Fibonacci.
- **Format**: Nombres séparés par une virgule et un espace.
- **Retour**: 0 en cas de succès.

## Compilation

Les programmes peuvent être compilés avec GCC en utilisant les options suivantes:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o executable_name
