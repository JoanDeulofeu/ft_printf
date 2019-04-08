#include <stdio.h>
#include <stdarg.h>

double moyenne(int nb_valeurs, double valeur1, ...)
{
        double somme = valeur1;
		printf ("%.3f\n", valeur1);
        va_list params; // pointeur de la liste des paramètres
        va_start(params, valeur1); // initialise le pointeur grâce
                                   // au dernier paramètre fixe
        for (int i = 1 ; i < nb_valeurs ; ++i) {
                // récupérer le paramètre suivant de la liste:
                double valeur_suiv = va_arg(params, double);
				printf ("%.3f\n", valeur_suiv);
                somme += valeur_suiv;
        }
        va_end(params); // fermeture de la liste
        return somme / nb_valeurs;
}

int main(void)
{       // exemple d'utilisation :
        double somme = moyenne(3, 14.57, 18.01, 17.58);
		printf ("%.3f\n", somme);
        return 0;
}
