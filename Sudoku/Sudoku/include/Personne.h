#ifndef PERSONNE_H
#define PERSONNE_H


class Personne : public Joueur
{
    public:
        Personne();
        virtual ~Personne();
        Personne(const Personne& other);
        Personne& operator=(const Personne& other);
        void remplir();
        void resoudre ();
    protected:

    private:
};

#endif // PERSONNE_H
