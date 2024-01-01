#include <stdio.h>
#include <string.h>
#define max 50


typedef struct Date {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct Profil {
    int id_profil;
    int num_inscri;
    char nom[20];
    char prenom[15];
    char adresse[20];
    Date date_naissance;
    char adresse_mail[45];
    long int num_tel;
} Profil;

typedef struct Auteur {
    Date date_premier;
    Date date_dernier;
    int nb_msp;
    short int type_compte;
    Profil *profil ;
    int id_auteur ;
} Auteur;

typedef struct Message {
    int id;
    char titre[15];
    char texte[max ];
    Date date_publication;
    Auteur auteur;
    int type;
    struct Message *msg_pere;
} Message;

typedef struct Nom_site {
    char site[max ];
} Nom_site;

typedef struct Rubrique {
    char theme[max ];
    Date date_creation;
    char adresse_mail_animateur[45];
    Nom_site tab_sites[max ];
    Message *tab_messages;
    int taille_tab_messages;
    int id_rubrique ;
} Rubrique;

typedef struct Forum {
    char adresse_internet[max ]; //1
    char adresse_mail_responsable[45];//2
    int taille_rubriques ;
    Rubrique * rubriques;
    int id_forum ;
} Forum ;

typedef struct ListeAuteur
{
 Auteur auteur ;
 struct ListeAuteur *next ;
} ListeAuteur ;

typedef struct ListeProfil
{
 Profil profil;
 struct ListeProfil *next ;
}ListeProfil;

typedef struct ListeRubrique
{
 Rubrique rubrique;
 struct ListeRubrique *next ;
}ListeRubrique;
typedef struct ListeForum
{
 Forum forum;
 struct ListeForum *next ;
}ListeForum;
typedef struct ListeMessage
{
 Message message;
 struct ListeMessage *next ;
}ListeMessage;
typedef struct MESS_REP
{
Message message ;
int id_pere ;
}MESS_REP;

typedef struct ListeReponse
{

MESS_REP message ;

struct ListeReponse * next ;
}ListeReponse ;
typedef struct nbDate
{
Date date ;
int nb ;
}nbDate;
typedef struct ListeDate
{
Date date ;
struct ListeDate * next ;
}ListeDate ;
