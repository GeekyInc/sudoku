#ifndef MACHINE_H
#define MACHINE_H


class Machine : public Joueur
{
    public:
        Machine();
        virtual ~Machine();
        Machine(const Machine& other);
        Machine& operator=(const Machine& other);
        void remplir ();
        void resoudre () ;
    protected:

    private:
};

#endif // MACHINE_H
