# H4214_PLDComp

Ce ReadMe contient notamment les instructions pour faire fonctionner notre code, les fonctionnalités implémentées en Frontend
ainsi qu'en BackEnd.

Instructions: //TODO Compléter
Il est à noter que l'assembleur généré en x86 par notre code est compatible avec MacOS et peut générer sous linux une erreur
liée aux appels de fonction (linux demande la présence d'un '_' avant les noms de fonction).

FrontEnd:
Toutes les fonctionnalités présente dans l'énoncé du projet sont présentes (les FOR ne sont donc PAS acceptés) à l'exception
de la vérification statique du programme. Sont donc :
  Analyse lexicale du code à compiler.
  Analyse syntaxique du code à compiler. 
  Création de la représentation en mémoire du code à compiler.
  Typage des noeuds.

Voici le sous-ensemble du langage C qui est reconnu par notre compilateur : 
  Uniquement les types char, int32_t et int64_t.
  Tableaux à une dimension.
  Initialisation d’une variable possible lors de sa déclaration.
  Déclaration multiple de variables.
  Déclaration de variables globales en début de programme.
  Déclaration et définition de fonctions (type retour void possible)
  Structures de contrôle if, else et while.
  Structure de bloc avec { et }.
  Tous les opérateurs du langage C, y compris l’affectation.
  Déclarations de variables uniquement en début de fonction.
  Les fonctions putchar et getchar comme entrées-sorties.
  Les directives commençant par # en début de programme sont acceptées mais ignorées.

BackEnd:
Les structures IF/Else et While fonctionnent. Les appels de fonction à 1 paramètre également, avec ou sans return.
Les appels récursifs de fonction fonctionnent. 
Les opérations d'addition, de soustraction et de multiplication sont implémentées, et les priorités d'opération gérées.
La fonction Putchar s'execute correctement. 
La division, les tableaux et les for ne sont pas gérés, ainsi que la gestion de plus d'un paramètre dans un appel de fonction.
//TODO compléter. Les i++ marchent ? L'affectation en même temps que la déclaration ? Le type int32_t ?
