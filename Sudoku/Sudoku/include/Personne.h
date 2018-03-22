#ifndef PERSONNE_H
#define PERSONNE_H


class Personne
{
    public:
        Personne();
        virtual ~Personne();
        Personne(const Personne& other);
        Personne& operator=(const Personne& other);

    protected:

    private:
};

#endif // PERSONNE_H
