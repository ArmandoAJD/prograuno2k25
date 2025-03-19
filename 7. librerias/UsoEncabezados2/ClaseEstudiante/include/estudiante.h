#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


class Estudiante
{
    public:
        Estudiante();
        virtual ~Estudiante();

    protected:

    private:
        string carnet;
        string nombre;
        string direccion;
};

#endif // ESTUDIANTE_H
