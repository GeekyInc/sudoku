#ifndef CASE_H
#define CASE_H


class Case
{
    int val;
    int possibles[];//je la modifie
    bool estModifiable;
    public:
        Case();
        virtual ~Case();
        Case(const Case& other);
        Case& operator=(const Case& other);
        bool ExistLigne (Grille , int , int );
        bool Existcolonne (Grille , int ,int ) ;
};

#endif // CASE_H
