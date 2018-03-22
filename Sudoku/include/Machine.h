#ifndef MACHINE_H
#define MACHINE_H


class Machine
{
    public:
        Machine();
        virtual ~Machine();
        Machine(const Machine& other);
        Machine& operator=(const Machine& other);

    protected:

    private:
};

#endif // MACHINE_H
