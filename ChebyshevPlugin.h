#ifndef CHEBYSHEVPLUGIN_H
#define CHEBYSHEVPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class ChebyshevPlugin : public Plugin
{
public: 
 std::string toString() {return "Chebyshev";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
