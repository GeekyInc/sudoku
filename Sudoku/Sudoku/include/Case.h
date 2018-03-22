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
};

#endif // CASE_H
