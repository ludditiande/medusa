///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2014 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 11/24/2014
///////////////////////////////////////////////////////////////////////
#ifndef _MEDUSA_CONSOLE_MAIN_HPP
#define _MEDUSA_CONSOLE_MAIN_HPP

#include "medusa/console/main_opt.hpp"
#include "xos/base/getopt/main.hpp"

#define MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPT "logging"
#define MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_REQUIRED MEDUSA_MAIN_OPT_ARGUMENT_REQUIRED
#define MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_RESULT 0
#define MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG MEDUSA_MAIN_LOGGING_OPTARG
#define MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTUSE MEDUSA_MAIN_LOGGING_OPTUSE
#define MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_S "l:"
#define MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C 'l'
#define MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTION \
   {MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPT, \
    MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_REQUIRED, \
    MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_RESULT, \
    MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C}, \

#define MEDUSA_CONSOLE_MAIN_HELP_OPT "help"
#define MEDUSA_CONSOLE_MAIN_HELP_OPTARG_REQUIRED MEDUSA_MAIN_OPT_ARGUMENT_NONE
#define MEDUSA_CONSOLE_MAIN_HELP_OPTARG_RESULT 0
#define MEDUSA_CONSOLE_MAIN_HELP_OPTARG MEDUSA_MAIN_HELP_OPTARG
#define MEDUSA_CONSOLE_MAIN_HELP_OPTUSE MEDUSA_MAIN_HELP_OPTUSE
#define MEDUSA_CONSOLE_MAIN_HELP_OPTVAL_S "?"
#define MEDUSA_CONSOLE_MAIN_HELP_OPTVAL_C '?'
#define MEDUSA_CONSOLE_MAIN_HELP_OPTION \
   {MEDUSA_CONSOLE_MAIN_HELP_OPT, \
    MEDUSA_CONSOLE_MAIN_HELP_OPTARG_REQUIRED, \
    MEDUSA_CONSOLE_MAIN_HELP_OPTARG_RESULT, \
    MEDUSA_CONSOLE_MAIN_HELP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define MEDUSA_CONSOLE_MAIN_OPTIONS_CHARS \
    MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_S \
    MEDUSA_CONSOLE_MAIN_HELP_OPTVAL_S \

#define MEDUSA_CONSOLE_MAIN_OPTIONS_OPTIONS \
    MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTION \
    MEDUSA_CONSOLE_MAIN_HELP_OPTION \

namespace medusa {
namespace console {

typedef xos::base::getopt::main_implement main_implements;
typedef xos::base::getopt::main main_extends;

///////////////////////////////////////////////////////////////////////
///  Class: main
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main: virtual public main_implements, public main_extends {
public:
    typedef main_implements Implements;
    typedef main_extends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main() {
    }
    virtual ~main() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_logging_levels_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = on_logging_option
        (MEDUSA_MAIN_LOGGING_OPTVAL_C,
         optarg, optname, optind, argc, argv, env);
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual int on_help_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = on_usage_option
        (optval, optarg, optname, optind, argc, argv, env);
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = 0;
        switch(optval) {
        case MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C:
            err = on_logging_levels_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case MEDUSA_CONSOLE_MAIN_HELP_OPTVAL_C:
            err = on_help_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = Extends::on_option
            (optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char* option_usage
    (const char*& optarg, const struct option* longopt) {
        const char* chars = "";
        switch(longopt->val) {
        case MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C:
            optarg = MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG;
            chars = MEDUSA_CONSOLE_MAIN_LOGGING_LEVELS_OPTUSE;
            break;
        case MEDUSA_CONSOLE_MAIN_HELP_OPTVAL_C:
            optarg = MEDUSA_CONSOLE_MAIN_HELP_OPTARG;
            chars = MEDUSA_CONSOLE_MAIN_HELP_OPTUSE;
            break;
        default:
            chars = Extends::option_usage(optarg, longopt);
        }
        return chars;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char* options(const struct option*& longopts) {
        int err = 0;
        static const char* chars = MEDUSA_CONSOLE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            MEDUSA_CONSOLE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace console
} // namespace medusa 

namespace medusa {
namespace app {
namespace console {

typedef medusa::console::main_implements main_implements;
typedef medusa::console::main_extends main_extends;
typedef medusa::console::main main;

} // namespace console
} // namespace app
} // namespace medusa

#endif // _MEDUSA_CONSOLE_MAIN_HPP
