#include "superheader.h"  // Instead of individual includes


STEntry::STEntry()
{}
        
STEntry::STEntry(Token* tok)
{
    token = tok;
    reserved = false;
}

STEntry::STEntry(Token* tok, bool res)
{
    token = tok;
    reserved = res;
}