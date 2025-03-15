//
// Created by QinJM on 25-2-25.
//

#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "object.h"
#include "vm.h"

ObjFunction *compile(const char *source);

void markCompilerRoots();

#endif //CLOX_COMPILER_H
