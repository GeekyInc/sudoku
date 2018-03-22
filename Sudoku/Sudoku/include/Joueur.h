#ifndef JOUEUR_H
#define JOUEUR_H


class Joueur
{
    protected:
        string pseudo;
    public:
        Joueur();
        virtual ~Joueur();
        void remplir () ;
        void resoudre ();
};

#endif // JOUEUR_H
