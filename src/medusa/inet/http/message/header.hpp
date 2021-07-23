///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2015 $organization$
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
///   File: header.hpp
///
/// Author: $author$
///   Date: 1/13/2015
///////////////////////////////////////////////////////////////////////
#ifndef _MEDUSA_INET_HTTP_MESSAGE_HEADER_HPP
#define _MEDUSA_INET_HTTP_MESSAGE_HEADER_HPP

#include "medusa/base/base.hpp"

#define MEDUSA_INET_HTTP_MESSAGE_HEADER_NAME_CONTENT_ENCODING "Content-Encoding"
#define MEDUSA_INET_HTTP_MESSAGE_HEADER_NAME_CONTENT_LENGTH "Content-Length"
#define MEDUSA_INET_HTTP_MESSAGE_HEADER_NAME_CONTENT_TYPE "Content-Type"

#define MEDUSA_INET_HTTP_MESSAGE_HEADER_NAMES \
    MEDUSA_INET_HTTP_MESSAGE_HEADER_NAME_CONTENT_ENCODING , \
    MEDUSA_INET_HTTP_MESSAGE_HEADER_NAME_CONTENT_LENGTH , \
    MEDUSA_INET_HTTP_MESSAGE_HEADER_NAME_CONTENT_TYPE , \

namespace medusa {
namespace inet {
namespace http {
namespace message {
namespace header {

///////////////////////////////////////////////////////////////////////
/// Enum: which_t
///////////////////////////////////////////////////////////////////////
typedef int which_t;
enum {
    none = 0,

    content_encoding,
    content_length,
    content_type,

    next,
    first = (none + 1),
    last = (next - 1),
    count = (last - first + 1)
};

///////////////////////////////////////////////////////////////////////
/// Class: name
///////////////////////////////////////////////////////////////////////
typedef string_implements name_implements;
typedef string_t name_extends;
class _EXPORT_CLASS name: virtual public name_implements, public name_extends {
public:
    typedef name_implements Implements;
    typedef name_extends Extends;
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    name(which_t which): which_(none) {
        const char_t* name = 0;
        if ((name = of(which))) {
            this->assign(name);
            which_ = which;
        }
    }
    name(const name& copy): Extends(copy), which_(copy.which_) {}
    name(): which_(none) {}
    virtual ~name() {}
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    static const char_t* of(which_t which) {
        const char_t** name = of();
        if ((name) && (which >= first) && (which <= last)) {
            return name[which - first];
        }
        return 0;
    }
    static const char_t** of() {
        static const char_t* name[header::count + 1] = {
            MEDUSA_INET_HTTP_MESSAGE_HEADER_NAMES
            0
        };
        return name;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    which_t which_;
};

} // namespace header
} // namespace message 
} // namespace http 
} // namespace inet 
} // namespace medusa 

#endif // _MEDUSA_INET_HTTP_MESSAGE_HEADER_HPP 
