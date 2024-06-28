#include "parser.h"

// create parsers -> Polish Notation
// (Mathematical Expressions)
namespace parser
{

mpc_parser_t *num = mpc_new("number");
mpc_parser_t *op = mpc_new("operator");
mpc_parser_t *expr = mpc_new("expression");
mpc_parser_t *lispV = mpc_new("lispV");


void createParser()
{
    mpca_lang(MPCA_LANG_DEFAULT,
    "number : /-?[0-9]/ ;"
    "operator: '+' | '-' | '*' | '/' ;"
    "expr   : <number> | '(' <operator> <expr>+ ')' ;"
    "lispV  : /^/ <operator> <expr>+ /$/ ;",
    num, op, expr, lispV);
}

void tryParse(const char *input)
{
    mpc_result_t r;

    if(mpc_parse("<stdin>", input, lispV, &r))
    {
        mpc_ast_print((mpc_ast_t *) r.output);
        mpc_ast_delete((mpc_ast_t *) r.output);
    }
    else
    {
        mpc_ast_print((mpc_ast_t *) r.error);
        mpc_ast_delete((mpc_ast_t *) r.error);
    }

}

void cleanParser()
{
    mpc_cleanup(4, num, op, expr, lispV);
}
}