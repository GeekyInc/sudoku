#ifndef GRILLE_H
#define GRILLE_H


class Grille
{
    public:
        Grille();
        virtual ~Grille();
        Grille(const Grille& other);
        Grille& operator=(const Grille& other);
        void afficher () ;
    protected:

    private:
};

#endif // GRILLE_H
