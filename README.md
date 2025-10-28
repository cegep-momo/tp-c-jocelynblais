# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

## Veille technologique

# Question 1 : C++

Expliquez en détails une fonctionnalité / notion dans le code que ne nous avons pas ou peu vu en cours.

J’ai utilisé la notion de classe statique pour créer le code de gestion des journaux d’activité.
Cette approche me permet de partager les journaux et les fonctions liées à leur gestion à travers les différentes parties du programme, sans avoir à créer un objet à chaque fois. C’est une notion qui diffère un peu de la programmation orientée objet, car les éléments statiques appartiennent directement à la classe au lieu d’appartenir à une instance. J’ai aussi ajouté une fonction pour obtenir la date et l’heure actuelles dans les journaux afin que chaque activité soit datée et plus facile à suivre. Par exemple, l’appel ctime(time(0)) retourne une chaîne comme : Tue Oct 28 20:16:21 2025. Cela permet de savoir exactement quand chaque action (comme un emprunt ou un retour de livre) a eu lieu.

# Question 2 : Options de développement possible

Proposez une solution plus adaptée pour la gestion de bibliothèque et faisant appel éventuellement à une technologie autre que le C++, et expliquez comment vous interfaceriez ça avec le C++. Pensez au futur de cette bibliothèque à Alexandrie qui pourrait éventuellement contenir des millions de livres.

Si la bibliothèque devait contenir des millions de livres, un simple programme en C++ avec des fichiers texte deviendrait rapidement trop lent et difficile à gérer. Une meilleure option serait d’utiliser une base de données comme MySQL ou PostgreSQL pour stocker les livres, les utilisateurs et les emprunts de façon organisée et rapide à consulter. On pourrait aussi créer un service web(API) (par exemple avec Node.js ou Python) qui s’occuperait de la gestion des données et qui communiquerait avec une interface graphique ou un client en C++. Le programme en C++ pourrait alors envoyer des requêtes HTTP au serveur pour ajouter, modifier ou rechercher des livres, à l’aide d’une librairie comme libcurl. Cette méthode permettrait d’avoir une application plus performante, plus sécurisée et surtout capable de gérer un grand volume de données sans ralentir, tout en gardant la logique principale en C++.