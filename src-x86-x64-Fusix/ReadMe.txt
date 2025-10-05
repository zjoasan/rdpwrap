
================================================================================================================================================================================================================================================================
Dynamic Component Library. Review of the RDPWrap project
================================================================================================================================================================================================================================================================

This DLL RDPWrap library is created automatically using the application wizard.

This file presents a summary of the contents of all files included in the RDPWrap application.


RDPWrap.vcxproj
This is the main file of the VC++ project, created using the application wizard. It contains information about the version of the Visual C++ language used to create the file, as well as information about the platforms, configurations and functions of the project selected using the application wizard.

RDPWrap.vcxproj.filters
This is a filter file for VC++ projects created using the application wizard. It contains information about mapping between files in your project and filters. These mappings are used in an IDE environment to group files with the same extensions into a single node (for example, CPP files are matched to the Source Files filter).

RDPWrap.cpp
The primary source file of the DLL library.

This DLL library does not export symbols. Therefore, no LIB file is created during its construction. If this project needs to determine a dependency on another project, you need to add a code to export characters from the DLL library to ensure the creation of an export library, or set a “Yes” value for the “Miss the input library” property on the general properties page of the “Component” folder in the “Property Pages” dialog box of the project.

// / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /
Other standard files:

StdAfx.h, StdAfx.cpp
These files are used to construct a precompiled header (PCH) file called RDPWrap.pch and a precompiled type file called StdAfx.obj.

// / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /
Other notes.

With the help of TODO: comments, the application wizard identifies the source code fragments that need to be supplemented or changed.

// / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /
