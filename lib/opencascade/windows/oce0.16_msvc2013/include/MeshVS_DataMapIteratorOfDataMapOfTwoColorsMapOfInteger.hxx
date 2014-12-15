// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _MeshVS_TwoColors_HeaderFile
#include <MeshVS_TwoColors.hxx>
#endif
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_MapOfInteger;
class MeshVS_TwoColorsHasher;
class MeshVS_DataMapOfTwoColorsMapOfInteger;
class MeshVS_DataMapNodeOfDataMapOfTwoColorsMapOfInteger;



class MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger();
  
  Standard_EXPORT   MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger(const MeshVS_DataMapOfTwoColorsMapOfInteger& aMap);
  
  Standard_EXPORT     void Initialize(const MeshVS_DataMapOfTwoColorsMapOfInteger& aMap) ;
  
  Standard_EXPORT    const MeshVS_TwoColors& Key() const;
  
  Standard_EXPORT    const TColStd_MapOfInteger& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif