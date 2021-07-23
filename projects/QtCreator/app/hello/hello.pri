########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: hello.pri
#
# Author: $author$
#   Date: 6/28/2021
#
# QtCreator .pri file for medusa executable hello
########################################################################

########################################################################
# hello

# hello TARGET
#
hello_TARGET = hello

# hello INCLUDEPATH
#
hello_INCLUDEPATH += \
$${medusa_INCLUDEPATH} \

# hello DEFINES
#
hello_DEFINES += \
$${medusa_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# hello OBJECTIVE_HEADERS
#
#hello_OBJECTIVE_HEADERS += \
#$${MEDUSA_SRC}/xos/app/console/hello/main.hh \

# hello OBJECTIVE_SOURCES
#
#hello_OBJECTIVE_SOURCES += \
#$${MEDUSA_SRC}/xos/app/console/hello/main.mm \

########################################################################
# hello HEADERS
#
hello_HEADERS += \
$${MEDUSA_SRC}/medusa/base/string.hpp \
$${MEDUSA_SRC}/medusa/base/array.hpp \
$${MEDUSA_SRC}/medusa/base/types.hpp \
$${MEDUSA_SRC}/medusa/base/base.hpp \
\
$${MEDUSA_SRC}/medusa/mt/mt.hpp \
$${MEDUSA_SRC}/medusa/mt/signaler.hpp \
$${MEDUSA_SRC}/medusa/mt/semaphore.hpp \
$${MEDUSA_SRC}/medusa/mt/mutex.hpp \
\
$${MEDUSA_SRC}/medusa/network/network.hpp \
$${MEDUSA_SRC}/medusa/network/sockets.hpp \
$${MEDUSA_SRC}/medusa/network/sockets/connection.hpp \
$${MEDUSA_SRC}/medusa/network/connection.hpp \
$${MEDUSA_SRC}/medusa/network/socket.hpp \
$${MEDUSA_SRC}/medusa/network/sockets/endpoint.hpp \
$${MEDUSA_SRC}/medusa/network/endpoint.hpp \
$${MEDUSA_SRC}/medusa/network/sockets/location.hpp \
$${MEDUSA_SRC}/medusa/network/location.hpp \
$${MEDUSA_SRC}/medusa/network/transport.hpp \
$${MEDUSA_SRC}/medusa/network/address.hpp \
\
$${MEDUSA_SRC}/medusa/io/socket/writer.hpp \
$${MEDUSA_SRC}/medusa/io/socket/reader.hpp \
$${MEDUSA_SRC}/medusa/io/logger.hpp \
$${MEDUSA_SRC}/medusa/io/file.hpp \
$${MEDUSA_SRC}/medusa/io/reader.hpp \
$${MEDUSA_SRC}/medusa/io/sequence.hpp \
\
$${MEDUSA_SRC}/medusa/app/console/hello/main.hpp \
$${MEDUSA_SRC}/medusa/console/main.hpp \
$${MEDUSA_SRC}/medusa/console/main_main.hpp \

# hello SOURCES
#
hello_SOURCES += \
$${MEDUSA_SRC}/medusa/base/string.cpp \
$${MEDUSA_SRC}/medusa/base/array.cpp \
$${MEDUSA_SRC}/medusa/base/types.cpp \
$${MEDUSA_SRC}/medusa/base/base.cpp \
\
$${MEDUSA_SRC}/medusa/mt/mt.cpp \
$${MEDUSA_SRC}/medusa/mt/signaler.cpp \
$${MEDUSA_SRC}/medusa/mt/semaphore.cpp \
$${MEDUSA_SRC}/medusa/mt/mutex.cpp \
\
$${MEDUSA_SRC}/medusa/network/network.cpp \
$${MEDUSA_SRC}/medusa/network/sockets.cpp \
$${MEDUSA_SRC}/medusa/network/sockets/connection.cpp \
$${MEDUSA_SRC}/medusa/network/socket.cpp \
$${MEDUSA_SRC}/medusa/network/sockets/endpoint.cpp \
$${MEDUSA_SRC}/medusa/network/sockets/location.cpp \
$${MEDUSA_SRC}/medusa/network/transport.cpp \
$${MEDUSA_SRC}/medusa/network/address.cpp \
\
$${MEDUSA_SRC}/medusa/io/socket/writer.cpp \
$${MEDUSA_SRC}/medusa/io/socket/reader.cpp \
$${MEDUSA_SRC}/medusa/io/logger.cpp \
$${MEDUSA_SRC}/medusa/io/file.cpp \
$${MEDUSA_SRC}/medusa/io/sequence.cpp \
\
$${MEDUSA_SRC}/medusa/app/console/hello/main.cpp \
$${MEDUSA_SRC}/medusa/console/main_main.cpp \

########################################################################
# hello FRAMEWORKS
#
hello_FRAMEWORKS += \
$${medusa_FRAMEWORKS} \

# hello LIBS
#
hello_LIBS += \
$${medusa_LIBS} \
