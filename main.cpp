#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
 
using namespace std;

int main() {

    // Fonction permettant d'initialiser le générateur de nombres aléatoire rand. 
    srand(time(0));

    // On va créer un tableau de nom avec une taille de 0 pour l'instant 
    vector<string> nameList(0);
    
    // On push les noms dans le tableau
    nameList.push_back("Pierre");
    nameList.push_back("Estebane");
    nameList.push_back("Jeremy C");
    nameList.push_back("Jeremy M");
    nameList.push_back("Frédéric");
    nameList.push_back("Rayane");
    nameList.push_back("Théo");
    nameList.push_back("Evan");
    nameList.push_back("Louis");
    nameList.push_back("Julien");
    nameList.push_back("Thibault");
    nameList.push_back("Enzo");

    vector<string> modulesList(0);
    modulesList.push_back("Gérer un portefeuille client");
    modulesList.push_back("Gérer un portefeuille produit/recette");
    modulesList.push_back("Recevoir une commande client");
    modulesList.push_back("Faire un traitement automate en fonction d'une commande, renvoyer un fichier de résultat");
    modulesList.push_back("Gestion de l'automate");
    modulesList.push_back("KPI Calculs et réalisation de statistiques à partir des fichiers de commande et automate générés");
 
    int nbRandom;
    int nbRandomModules;

    // On va parcourir notre tableau de prénoms, générer un prénom, lorsqu'il est saisi l'effacer. 
    while (nameList.size() > 0 && modulesList.size() > 0) {
        
        // On génére un nombre aléatoire grâce à la fonction rand modulo le nombre d'éléments contenus dans le tableau. 
        nbRandom = rand() % nameList.size();
        string nom = nameList[nbRandom];

        // Pour écraser un élément de l'array, on utilise son index, donc le début + l'index de la boucle.  
        nameList.erase(nameList.begin() + nbRandom);

        // On va maintenant tirer un module.
        nbRandomModules = rand() % modulesList.size();
        string module = modulesList[nbRandomModules];
        modulesList.erase(modulesList.begin() + nbRandomModules);
 
        // Et maintenant générer le nom d'un partenaire. 
        nbRandom = rand() % nameList.size();
        cout << nom << " sera avec " << nameList[nbRandom] << ", ils devront faire le module --> " << module << endl;
        nameList.erase(nameList.begin() + nbRandom);
    }

    return 0;
}