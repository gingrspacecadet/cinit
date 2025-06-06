#pragma once

#include "cli.h"

const char *main_c(void);
const char *main_cpp(void);
char *generate_makefile(const char *project, lang_t lang);
const char *compile_flags(void);
char *debug_h(const char *project);
char *debug_hpp(const char *project);

#define FILE_SIZE 1024
