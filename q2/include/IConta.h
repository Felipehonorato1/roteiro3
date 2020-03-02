#ifndef ICONTA_H
#define ICONTA_H


class IConta
{
    public:
        IConta();
        virtual ~IConta();
        virtual void Sacar(double saque) = 0;
        virtual void Depositar(double deposito) = 0;

    protected:

    private:
};

#endif // ICONTA_H
