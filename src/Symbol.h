/***************************************************************************
                          Symbol.h
 
   Superclass for the symbols of the reduction tree
                          -------------------
    begin                : Fri Oct 24 2003
    copyright            : (C) 2002-2003 Manuel Astudillo
    email                : d00mas@efd.lth.se
 ***************************************************************************/
 /***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 ***************************************************************************/

#ifndef _GP_SYMBOL_H
#define _GP_SYMBOL_H

#include <string>
#include "SymbolTable.h"
#include "misc.h"

using namespace std;

struct Symbol {
public:
    virtual ~Symbol ();
    SymbolType type;
   
    Symbol *parent;
    wstring symbol;

    integer symbolIndex;
    integer state;
    integer line, col;
};


#endif