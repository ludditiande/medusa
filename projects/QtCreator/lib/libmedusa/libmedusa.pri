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
#   File: libmedusa.pri
#
# Author: $author$
#   Date: 6/27/2021
#
# QtCreator .pri file for medusa library libmedusa
########################################################################

########################################################################
# libmedusa

# libmedusa TARGET
#
libmedusa_TARGET = medusa
libmedusa_TEMPLATE = lib
libmedusa_CONFIG += staticlib

# libmedusa INCLUDEPATH
#
libmedusa_INCLUDEPATH += \
$${medusa_INCLUDEPATH} \

# libmedusa DEFINES
#
libmedusa_DEFINES += \
$${medusa_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# libmedusa OBJECTIVE_HEADERS
#
#libmedusa_OBJECTIVE_HEADERS += \
#$${MEDUSA_SRC}/xos/app/console/medusa/main.hh \

# libmedusa OBJECTIVE_SOURCES
#
#libmedusa_OBJECTIVE_SOURCES += \
#$${MEDUSA_SRC}/xos/app/console/medusa/main.mm \

########################################################################
# libmedusa HEADERS
#
libmedusa_HEADERS += \
$${MEDUSA_SRC}/medusa/inet/xttp/protocol/identifier.hpp \
$${MEDUSA_SRC}/medusa/inet/xttp/protocol/name.hpp \
$${MEDUSA_SRC}/medusa/inet/xttp/protocol/version.hpp \

# libmedusa SOURCES
#
libmedusa_SOURCES += \
$${MEDUSA_SRC}/medusa/inet/xttp/protocol/identifier.cpp \
$${MEDUSA_SRC}/medusa/inet/xttp/protocol/name.cpp \
$${MEDUSA_SRC}/medusa/inet/xttp/protocol/version.cpp \

########################################################################



