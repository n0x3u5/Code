////////////////////////////////////////////////////////////////////////////////
//   ____  ____   
//  /   /\/   /  
// /___/  \  /   
// \   \   \/  
//  \   \        Copyright (c) 2003-2004 Xilinx, Inc.
//  /   /        All Right Reserved. 
// /---/   /\     
// \   \  /  \  
//  \___\/\___\
////////////////////////////////////////////////////////////////////////////////

#ifndef H_Work_fa_4bit_behavioral_H
#define H_Work_fa_4bit_behavioral_H
#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


class Work_fa_4bit_behavioral: public HSim__s6 {
public:

    HSim__s1 SE[4];

    HSim__s1 SA[3];
  char *t19;
    Work_fa_4bit_behavioral(const char * name);
    ~Work_fa_4bit_behavioral();
    void constructObject();
    void constructPorts();
    void reset();
    void architectureInstantiate(HSimConfigDecl* cfg);
    virtual void vhdlArchImplement();
};



HSim__s6 *createWork_fa_4bit_behavioral(const char *name);

#endif
