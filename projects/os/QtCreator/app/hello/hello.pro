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
#   File: hello.pro
#
# Author: $author$
#   Date: 6/28/2021
#
# QtCreator .pro file for medusa executable hello
########################################################################
include(../../../../../build/QtCreator/medusa.pri)
include(../../../../QtCreator/medusa.pri)
include(../../medusa.pri)
include(../../../../QtCreator/app/hello/hello.pri)

TARGET = $${hello_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${hello_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${hello_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${hello_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${hello_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${hello_HEADERS} \
$${hello_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${hello_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${hello_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${hello_LIBS} \
$${FRAMEWORKS} \


