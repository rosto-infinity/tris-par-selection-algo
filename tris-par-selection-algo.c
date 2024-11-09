Algorithme Tri à Bulles
L'algorithme de tri à bulles (ou "Bubble Sort") est une méthode simple pour trier des éléments dans un tableau. Voici une explication détaillée de son fonctionnement :
1. Variables locales
•	�,�,�i,j,n : Ce sont des entiers naturels utilisés comme indices dans le tableau.
•	temptemp : Une variable temporaire utilisée pour échanger les valeurs dans le tableau.
2. Entrée
•	TabTab : Un tableau d'entiers naturels contenant entre 1 et �n éléments. Ce tableau est ce que nous voulons trier.
3. Sortie
•	TabTab : Le même tableau, mais trié dans l'ordre croissant.
4. Début de l'algorithme
L'algorithme commence par initialiser une boucle pour itérer sur le tableau.
5. Boucle externe
•	Pour �i allant de �n jusqu'à 1 faire :
•	Cette boucle détermine combien de fois nous allons passer à travers le tableau. Elle commence à �n et se termine à 1. Chaque passage permet de "faire remonter" le plus grand élément non trié vers sa position correcte.
6. Boucle interne
•	Pour �j allant de 2 jusqu'à �i faire :
•	Cette boucle parcourt les éléments du tableau jusqu'à l'indice �i. Elle compare chaque paire d'éléments adjacents.
7. Condition d'échange
•	Si Tab[�−1]>Tab[�]Tab[j−1]>Tab[j] alors :
•	Ici, nous vérifions si l'élément à l'indice �−1j−1 est supérieur à l'élément à l'indice �j. Si c'est le cas, cela signifie que ces deux éléments ne sont pas dans le bon ordre, et nous devons les échanger.
8. Échange des éléments
•	temp ← Tab[j-1] : Nous stockons temporairement la valeur de Tab[�−1]Tab[j−1] dans la variable temptemp.
•	Tab[j-1] ← Tab[j] : Nous remplaçons l'élément à l'indice �−1j−1 par l'élément à l'indice �j.
•	Tab[j] ← temp : Nous assignons la valeur stockée dans temptemp à l'élément à l'indice �j. Cela a pour effet d'échanger les deux éléments.
9. Fin des boucles
•	Fin Si : Terminer la condition d'échange.
•	Fin Pour : Terminer la boucle interne.
•	Fin Pour : Terminer la boucle externe.
10. Fin de l'algorithme
•	À ce stade, tous les éléments du tableau sont triés dans l'ordre croissant.
Résumé
L'algorithme de tri à bulles fonctionne en répétant plusieurs passes à travers le tableau, en comparant chaque paire d'éléments adjacents et en les échangeant si nécessaire. Ce processus est répété jusqu'à ce que le tableau soit complètement trié. Bien que simple, cet algorithme n'est pas très efficace pour de grands tableaux, car sa complexité temporelle est �(�2)O(n2).
