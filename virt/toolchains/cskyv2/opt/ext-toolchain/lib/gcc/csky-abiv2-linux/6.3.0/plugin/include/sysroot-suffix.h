#undef SYSROOT_SUFFIX_SPEC
#define SYSROOT_SUFFIX_SPEC "" \
"""%{mlittle-endian:" \
""  "%{mcpu=ck810f|march=ck810|mcpu=ck810|mcpu=ck810v|mcpu=ck810t|mcpu=ck810vt|mcpu=ck810vf|mcpu=ck810ft|mcpu=ck810vft:" \
""    "%{msoft-float:/""./././;" \
""    "mhard-float:/""././hard-fp/;" \
""    ":/""././};" \
""  "mcpu=ck807f|march=ck807|mcpu=ck807:" \
""    "%{msoft-float:/""./ck807/./;" \
""    "mhard-float:/""./ck807/hard-fp/;" \
""    ":/""./ck807/};" \
""  ":" \
""    "%{msoft-float:/""././;" \
""    "mhard-float:/""./hard-fp/;" \
""    ":/""./}};" \
"""mbig-endian|EB:" \
""  "%{mcpu=ck810f|march=ck810|mcpu=ck810|mcpu=ck810v|mcpu=ck810t|mcpu=ck810vt|mcpu=ck810vf|mcpu=ck810ft|mcpu=ck810vft:" \
""    "%{msoft-float:/""big/././;" \
""    "mhard-float:/""big/./hard-fp/;" \
""    ":/""big/./};" \
""  "mcpu=ck807f|march=ck807|mcpu=ck807:" \
""    "%{msoft-float:/""big/ck807/./;" \
""    "mhard-float:/""big/ck807/hard-fp/;" \
""    ":/""big/ck807/};" \
""  ":" \
""    "%{msoft-float:/""big/./;" \
""    "mhard-float:/""big/hard-fp/;" \
""    ":/""big/}};" \
""":" \
""  "%{mcpu=ck810f|march=ck810|mcpu=ck810|mcpu=ck810v|mcpu=ck810t|mcpu=ck810vt|mcpu=ck810vf|mcpu=ck810ft|mcpu=ck810vft:" \
""    "%{msoft-float:/""././;" \
""    "mhard-float:/""./hard-fp/;" \
""    ":/""./};" \
""  "mcpu=ck807f|march=ck807|mcpu=ck807:" \
""    "%{msoft-float:/""ck807/./;" \
""    "mhard-float:/""ck807/hard-fp/;" \
""    ":/""ck807/};" \
""  ":" \
""    "%{msoft-float:/""./;" \
""    "mhard-float:/""hard-fp/;" \
""    ":/""}}}"
