#include "config.h"

TUserConfiguration UserConfiguration;

TUserConfiguration::TUserConfiguration() {
	soundEnabled    = true;
	jitEnabled 		= true;
	frameSkip 		= 2;
	threadedRendering = true;
}
