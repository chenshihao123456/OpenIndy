// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_ListIteratorOfSetListOfSetOfLight_HeaderFile
#define _Visual3d_ListIteratorOfSetListOfSetOfLight_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_Visual3d_Light_HeaderFile
#include <Handle_Visual3d_Light.hxx>
#endif
#ifndef _Handle_Visual3d_ListNodeOfSetListOfSetOfLight_HeaderFile
#include <Handle_Visual3d_ListNodeOfSetListOfSetOfLight.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Visual3d_SetListOfSetOfLight;
class Visual3d_Light;
class Visual3d_ListNodeOfSetListOfSetOfLight;



class Visual3d_ListIteratorOfSetListOfSetOfLight  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Visual3d_ListIteratorOfSetListOfSetOfLight();
  
  Standard_EXPORT   Visual3d_ListIteratorOfSetListOfSetOfLight(const Visual3d_SetListOfSetOfLight& L);
  
  Standard_EXPORT     void Initialize(const Visual3d_SetListOfSetOfLight& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Handle_Visual3d_Light& Value() const;


friend class Visual3d_SetListOfSetOfLight;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item Handle_Visual3d_Light
#define Item_hxx <Visual3d_Light.hxx>
#define TCollection_ListNode Visual3d_ListNodeOfSetListOfSetOfLight
#define TCollection_ListNode_hxx <Visual3d_ListNodeOfSetListOfSetOfLight.hxx>
#define TCollection_ListIterator Visual3d_ListIteratorOfSetListOfSetOfLight
#define TCollection_ListIterator_hxx <Visual3d_ListIteratorOfSetListOfSetOfLight.hxx>
#define Handle_TCollection_ListNode Handle_Visual3d_ListNodeOfSetListOfSetOfLight
#define TCollection_ListNode_Type_() Visual3d_ListNodeOfSetListOfSetOfLight_Type_()
#define TCollection_List Visual3d_SetListOfSetOfLight
#define TCollection_List_hxx <Visual3d_SetListOfSetOfLight.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif