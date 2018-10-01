#include "rack.hpp"


using namespace rack;

// Forward-declare the Plugin, defined in Template.cpp
extern Plugin *plugin;

// Forward-declare each Model, defined in each module source file
extern Model *modelSeq;
extern Model *modelCount;
extern Model *modelSwitch;

struct small_port : SVGPort {
	small_port() {
		setSVG(SVG::load(assetPlugin(plugin,"res/small_port.svg")));
	}
};