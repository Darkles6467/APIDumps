#pragma once

#include "BaseDeclarations.h"
#include "IXMLDOMCharacterData.h"
#include "IXMLDOMNode.h"
#include "IDispatch.h"
#include "IUnknown.h"

struct IXMLDOMText : IXMLDOMCharacterData
{
};

struct IXMLDOMCDATASection : IXMLDOMText
{
};

