#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "AActor.h"

struct UKismetArrayLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static void FilterArray(const TArray<AActor *> * TargetArray, TSubclassOf<AActor> FilterClass, TArray<AActor *> * FilteredArray) { NativeCall<void, const TArray<AActor *> *, TSubclassOf<AActor>, TArray<AActor *> *>(nullptr, "UKismetArrayLibrary.FilterArray", TargetArray, FilterClass, FilteredArray); }
	static int GenericArray_Add(void * TargetArray, const UArrayProperty * ArrayProp, const void * NewItem) { return NativeCall<int, void *, const UArrayProperty *, const void *>(nullptr, "UKismetArrayLibrary.GenericArray_Add", TargetArray, ArrayProp, NewItem); }
	static int GenericArray_AddUnique(void * TargetArray, const UArrayProperty * ArrayProp, const void * NewItem) { return NativeCall<int, void *, const UArrayProperty *, const void *>(nullptr, "UKismetArrayLibrary.GenericArray_AddUnique", TargetArray, ArrayProp, NewItem); }
	static void GenericArray_Append(void * TargetArray, const UArrayProperty * TargetArrayProp, void * SourceArray, const UArrayProperty * SourceArrayProperty) { NativeCall<void, void *, const UArrayProperty *, void *, const UArrayProperty *>(nullptr, "UKismetArrayLibrary.GenericArray_Append", TargetArray, TargetArrayProp, SourceArray, SourceArrayProperty); }
	static void GenericArray_Clear(void * TargetArray, const UArrayProperty * ArrayProp) { NativeCall<void, void *, const UArrayProperty *>(nullptr, "UKismetArrayLibrary.GenericArray_Clear", TargetArray, ArrayProp); }
	static int GenericArray_Find(void * TargetArray, const UArrayProperty * ArrayProperty, const void * ItemToFind) { return NativeCall<int, void *, const UArrayProperty *, const void *>(nullptr, "UKismetArrayLibrary.GenericArray_Find", TargetArray, ArrayProperty, ItemToFind); }
	static void GenericArray_Get(void * TargetArray, const UArrayProperty * ArrayProp, int Index, void * Item) { NativeCall<void, void *, const UArrayProperty *, int, void *>(nullptr, "UKismetArrayLibrary.GenericArray_Get", TargetArray, ArrayProp, Index, Item); }
	static void GenericArray_HandleBool(const UProperty * Property, void * ItemPtr) { NativeCall<void, const UProperty *, void *>(nullptr, "UKismetArrayLibrary.GenericArray_HandleBool", Property, ItemPtr); }
	static void GenericArray_Insert(void * TargetArray, const UArrayProperty * ArrayProp, const void * NewItem, int Index) { NativeCall<void, void *, const UArrayProperty *, const void *, int>(nullptr, "UKismetArrayLibrary.GenericArray_Insert", TargetArray, ArrayProp, NewItem, Index); }
	static bool GenericArray_IsValidIndex(void * TargetArray, const UArrayProperty * ArrayProp, int IndexToTest) { return NativeCall<bool, void *, const UArrayProperty *, int>(nullptr, "UKismetArrayLibrary.GenericArray_IsValidIndex", TargetArray, ArrayProp, IndexToTest); }
	static int GenericArray_LastIndex(void * TargetArray, const UArrayProperty * ArrayProp) { return NativeCall<int, void *, const UArrayProperty *>(nullptr, "UKismetArrayLibrary.GenericArray_LastIndex", TargetArray, ArrayProp); }
	static int GenericArray_Length(void * TargetArray, const UArrayProperty * ArrayProp) { return NativeCall<int, void *, const UArrayProperty *>(nullptr, "UKismetArrayLibrary.GenericArray_Length", TargetArray, ArrayProp); }
	static void GenericArray_Remove(void * TargetArray, const UArrayProperty * ArrayProp, int IndexToRemove) { NativeCall<void, void *, const UArrayProperty *, int>(nullptr, "UKismetArrayLibrary.GenericArray_Remove", TargetArray, ArrayProp, IndexToRemove); }
	static bool GenericArray_RemoveItem(void * TargetArray, const UArrayProperty * ArrayProp, const void * Item) { return NativeCall<bool, void *, const UArrayProperty *, const void *>(nullptr, "UKismetArrayLibrary.GenericArray_RemoveItem", TargetArray, ArrayProp, Item); }
	static void GenericArray_Resize(void * TargetArray, const UArrayProperty * ArrayProp, int Size) { NativeCall<void, void *, const UArrayProperty *, int>(nullptr, "UKismetArrayLibrary.GenericArray_Resize", TargetArray, ArrayProp, Size); }
	static void GenericArray_Set(void * TargetArray, const UArrayProperty * ArrayProp, int Index, const void * NewItem, bool bSizeToFit) { NativeCall<void, void *, const UArrayProperty *, int, const void *, bool>(nullptr, "UKismetArrayLibrary.GenericArray_Set", TargetArray, ArrayProp, Index, NewItem, bSizeToFit); }
	static void GenericArray_SetArrayPropertyByName(UObject * OwnerObject, FName ArrayPropertyName, const void * SrcArrayAddr) { NativeCall<void, UObject *, FName, const void *>(nullptr, "UKismetArrayLibrary.GenericArray_SetArrayPropertyByName", OwnerObject, ArrayPropertyName, SrcArrayAddr); }
	static void GenericArray_Shuffle(void * TargetArray, const UArrayProperty * ArrayProp) { NativeCall<void, void *, const UArrayProperty *>(nullptr, "UKismetArrayLibrary.GenericArray_Shuffle", TargetArray, ArrayProp); }
};

