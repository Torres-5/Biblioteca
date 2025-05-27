#pragma once
#include <string>

class Recurso {
public:
    virtual ~Recurso() = default;
    virtual std::string getTipo() const = 0;
};

class RecursoFactory {
public:
    virtual ~RecursoFactory() = default;
    virtual Recurso* crearRecurso() = 0;
};
