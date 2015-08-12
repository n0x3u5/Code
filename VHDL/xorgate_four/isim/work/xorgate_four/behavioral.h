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

#ifndef H_Work_xorgate_four_behavioral_H
#define H_Work_xorgate_four_behavioral_H
#ifdef __MINGW32__
#include "xsimMinGW.h"
#else
#include "xsim.h"
#endif


class Work_xorgate_four_behavioral: public HSim__s6 {
public:

    HSim__s1 SE[2];

  char t0;
  char t1;
  char t2;
    Work_xorgate_four_behavioral(const char * name);
    ~Work_xorgate_four_behavioral();
    void constructObject();
    void constructPorts();
    void reset();
    void architectureInstantiate(HSimConfigDecl* cfg);
    virtual void vhdlArchImplement();
};



HSim__s6 *createWork_xorgate_four_behavioral(const char *name);

#endif
