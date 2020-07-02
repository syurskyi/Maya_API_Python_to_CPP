#include <maya/MFnPlugin.h>


MStatus initializePlugin(MObject pluginObj)
{
	const char* vendor = "Serhii Yurskyi";
	const char* version = "1.0.0";

	MFnPlugin pluginFn(pluginObj, vendor, version);

	return(MS::kSuccess);
}

MStatus uninitializePlugin(MObject pluginObj)
{
	return(MS::kSuccess);
}
