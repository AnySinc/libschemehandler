#ifndef SCHEME_HANDLER_H
#define SCHEME_HANDLER_H

#include <stdbool.h>

#define SCHEME_HANDLER_VERSION "0.7.2"

typedef struct scheme_handler scheme_handler;

bool scheme_register(const char* protocol, const char* handler, bool terminal);
bool scheme_open(const char* url);
scheme_handler* app_open(int argc, char* argv[], const char* dir);

// recreate this in any language (only here for testing)
void listen_callback(scheme_handler* handler, void* (*callback)(void* data, const char* value), void* in);

#endif