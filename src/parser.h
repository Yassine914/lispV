#ifndef __PARSER_H
#define __PARSER_H

#include "../include/mpc/mpc.h"
namespace parser
{
    void createParser();
    void tryParse(const char *input);
    void cleanParser();
}
#endif //__PARSER_H