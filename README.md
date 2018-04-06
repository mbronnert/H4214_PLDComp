# PLD Compilateur H4214

Ce ReadMe contient notamment les instructions pour faire fonctionner notre code, les fonctionnalités implémentées en Frontend
ainsi qu'en BackEnd.

# Authors

H4214
- BOUZAABIA Mohamed
- BRONNERT Mathilde
- EL GHISSASSI Ghita
- GRACIA Yohan
- RAHOUI Ayoub
- ZERHOUDI Saber

# Instructions

```
Il est à noter que l'assembleur a été généré en x86 sous MacOS.
```

## On Linux
Nous disposons d'un dossier 'antlr-cpp-runtime-4' contenant la bibliothèque de runtime C++.
L'assembleur peut engendrer sous linux une erreur liée aux appels de fonction (MacOS demande la présence d'un '_' avant les noms de fonction). Pour éviter ceci veuillez exécuter la commande suivante :
```
make adapt
```
Cette commande vérifier l'OS de la machine et adapte le code.

## On MacOS
Le code est déjà adapté pour être compiler sous MacOS, mais vous pouvez tout de même taper la commande ```make adapt``` pour vous en assurez.

# Runing tests

Nous avons conçu un makefile pour exécuter les options suivantes :

```
   Usage:
       make

   Options:
       default        Cette option va effectuer à la fois les tests Font-end et Backend
       testfront      Cette option va effectuer les tests de LexError, SemanticError, SyntaxError et validPrograms
       testback       Cette option va effectuer les tests Backends et génére le code assembleur sur le même dossier
       testfile       Cette option vous permet de tester un nouveau code .c, de générer l'assembleur et de l'exécuter
       adapt          Permet d'adapter le code à l'OS (MacOS/Linux)
       clean          Permet de clean et rm les fichiers bin et object
       grammar        Permet de générer les fichier antlr4 depuis la grammaire PLDCOMP.g4
```


# Implemented Features

Voici le sous-ensemble du langage C qui est reconnu par notre compilateur : 
  -- Uniquement les types char, int32_t et int64_t.
  -- Tableaux à une dimension.
  -- Initialisation d’une variable possible lors de sa déclaration.
  -- Déclaration multiple de variables.
  -- Déclaration de variables globales en début de programme.
  -- Déclaration et définition de fonctions (type retour void possible)
  -- Structures de contrôle if, else et while.
  -- Structure de bloc avec { et }.
  -- Tous les opérateurs du langage C, y compris l’affectation.
  -- Déclarations de variables uniquement en début de fonction.
  -- Les fonctions putchar et getchar comme entrées-sorties.
  -- Les directives commençant par # en début de programme sont acceptées mais ignorées.

## FrontEnd:
  - Analyse lexicale du code à compiler.
  - Analyse syntaxique du code à compiler.
  - Création de la représentation en mémoire du code à compiler.
  - Résolution de portée de variables en faisant le lien entre les variables utilisées et leurs déclarations.
  - Résolution de portée de fonctions en faisant le lien entre les fonctions utilisées et leurs déclarations.
  - Vérification statique des types des expressions et conversions faites.
  - Typage des noeuds intermédiaires.

## Backend:
  - Définition des structures de données pour une représentation intermédiaire linéaire.
  - Transformation de l’AST vers la représentation linéaire.
  - Génération de code assembleur à partir de la représentation linéaire.
  - Gestion des appels de procédures.
  - Les structures IF/ELSE et WHILE fonctionnent. Les appels de fonction à 1 paramètre également, avec ou sans return.
  - Les appels récursifs de fonction fonctionnent.
  - Les opérations d'addition, de soustraction et de multiplication sont implémentées, et les priorités d'opération gérées.
  - La fonction Putchar/Getchar s'execute correctement. 

# Remaining Features

## FrontEnd:
  - Vérification statique si une variable a été déclarée et jamais affectée ou utilisée.

## Backend:
  - Les opérations de division.
  - Les tableaux.
  - La gestion de plus d'un paramètre dans un appel de fonction (Le code est déjà implémenté, mais on a toujours un soucis avec le nombre de params).
  - L'affectation en même temps que la déclaration.



