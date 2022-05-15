
#define STRINGIFY(s) #s
#define EXPAND_AND_STRINGIFY(s) STRINGIFY(s)

const char gBuildTeam[] = "SW97 Dev Team";
const char gBuildDate[] = __DATE__ " " __TIME__;
const char gBuildMakeOption[] = "";
#ifdef PACKAGE_VERSION
const char gBuildGitVersion[] = EXPAND_AND_STRINGIFY(PACKAGE_VERSION);
#endif
