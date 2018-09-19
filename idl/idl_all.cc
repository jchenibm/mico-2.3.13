#include <CORBA.h>
#include "params.cc"
#include "parser.cc"
//#include "yacc.cc"
#include "scanner.cc"
#include "parsenode.cc"
#include "idlparser.cc"
#include "ir-copy.cc"
#include "codegen.cc"
#include "codegen-c++-util.cc"
#include "codegen-c++-common.cc"
#include "codegen-c++-stub.cc"
#include "codegen-c++-skel.cc"
#include "codegen-c++-impl.cc"
#include "codegen-c++.cc"
#include "codegen-idl.cc"
#include "codegen-midl.cc"
#include "dep.cc"
#include "error.cc"
#include "const.cc"
#include "db.cc"
#include "prepro.cc"
#include "keymap.cc"
#include "codegen-wsdl.cc"
#ifdef USE_CCM
#include "ccm-transform.cc"
#endif // USE_CCM