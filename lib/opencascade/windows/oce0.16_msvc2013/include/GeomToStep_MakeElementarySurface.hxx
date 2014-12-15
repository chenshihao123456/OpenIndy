// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeElementarySurface_HeaderFile
#define _GeomToStep_MakeElementarySurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_ElementarySurface_HeaderFile
#include <Handle_StepGeom_ElementarySurface.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_ElementarySurface_HeaderFile
#include <Handle_Geom_ElementarySurface.hxx>
#endif
class StepGeom_ElementarySurface;
class StdFail_NotDone;
class Geom_ElementarySurface;


//! This class implements the mapping between classes <br>
//!          ElementarySurface from Geom and the class ElementarySurface <br>
//!          from StepGeom which describes a ElementarySurface from <br>
//!          prostep. As ElementarySurface is an abstract Surface this <br>
//!          class is an access to the sub-class required. <br>
class GeomToStep_MakeElementarySurface  : public GeomToStep_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomToStep_MakeElementarySurface(const Handle(Geom_ElementarySurface)& S);
  
  Standard_EXPORT    const Handle_StepGeom_ElementarySurface& Value() const;





protected:





private:



Handle_StepGeom_ElementarySurface theElementarySurface;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif