/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef DataClassSubInstanceXml_h_
#define DataClassSubInstanceXml_h_


#include "Doc/SchemaTypesDoc/CDataClassSubInstanceDoc.h"

#include "Doc/DocXml/SchemaTypesXml/SchemaTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the DataClassSubInstance class to/from XML
	namespace DataClassSubInstanceXml {

		/// Adds the DataClassSubInstanceDoc into the XML.
		void SCHEMATYPESXML_LINKAGE add(
			const SmartPtrCDataClassSubInstanceDoc dataClassSubInstanceDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the DataClassSubInstanceDoc from the XML.
		SmartPtrCDataClassSubInstanceDoc SCHEMATYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
