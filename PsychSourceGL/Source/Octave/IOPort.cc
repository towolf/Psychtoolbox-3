// This C++ file is the interface between GNU/Octave and Psychtoolbox
// module IOPort. It defines the entry-point function FIOPort and the online
// help for IOPort. The function itself (see bottom of file) is just a
// wrapper around octFunction(), the real command dispatcher defined in
// the PsychScriptingGlue.cc file.
// This file is autogenerated, please do not edit!
//

#ifdef PTBOCTAVE
#define PTBMODULE_IOPort
#include <octave/oct.h>

extern "C" {
  // mex.cc names both mexFunction (c) and MEXFUNCTION (Fortran)
  // but the mex file only defines one of them, so define the other
  // here just to keep the linker happy, but don't ever call it.
  void F77_FUNC(mexfunction,MEXFUNCTION)() {}
  const char *mexFunctionName = "IOPort";
} ;

DEFUN_DLD(IOPort, args, nargout,
"IOPort not directly documented. Try the following:\n   type(file_in_loadpath('IOPort.m'))\n")

{
  octave_value_list octFunction(const octave_value_list &, const int);
  return octFunction(args, nargout);
}
#endif

