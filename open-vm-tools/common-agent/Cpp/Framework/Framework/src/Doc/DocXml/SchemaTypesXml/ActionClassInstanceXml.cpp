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

#include "stdafx.h"

#include "Doc/DocXml/SchemaTypesXml/InstanceOperationCollectionXml.h"

#include "Doc/SchemaTypesDoc/CActionClassInstanceDoc.h"
#include "Doc/SchemaTypesDoc/CInstanceOperationCollectionDoc.h"
#include "Xml/XmlUtils/CXmlElement.h"
#include "Doc/DocXml/SchemaTypesXml/ActionClassInstanceXml.h"

using namespace Caf;

void ActionClassInstanceXml::add(
	const SmartPtrCActionClassInstanceDoc actionClassInstanceDoc,
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("ActionClassInstanceXml", "add");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(actionClassInstanceDoc);
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string namespaceValVal = actionClassInstanceDoc->getNamespaceVal();
		CAF_CM_VALIDATE_STRING(namespaceValVal);
		thisXml->addAttribute("namespace", namespaceValVal);

		const std::string nameVal = actionClassInstanceDoc->getName();
		CAF_CM_VALIDATE_STRING(nameVal);
		thisXml->addAttribute("name", nameVal);

		const std::string versionVal = actionClassInstanceDoc->getVersion();
		CAF_CM_VALIDATE_STRING(versionVal);
		thisXml->addAttribute("version", versionVal);

		const SmartPtrCInstanceOperationCollectionDoc instanceOperationCollectionVal =
			actionClassInstanceDoc->getInstanceOperationCollection();
		CAF_CM_VALIDATE_SMARTPTR(instanceOperationCollectionVal);

		const SmartPtrCXmlElement instanceOperationCollectionXml =
			thisXml->createAndAddElement("instanceOperationCollection");
		InstanceOperationCollectionXml::add(instanceOperationCollectionVal, instanceOperationCollectionXml);
	}
	CAF_CM_EXIT;
}

SmartPtrCActionClassInstanceDoc ActionClassInstanceXml::parse(
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("ActionClassInstanceXml", "parse");

	SmartPtrCActionClassInstanceDoc actionClassInstanceDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string namespaceValStrVal =
			thisXml->findRequiredAttribute("namespace");
		const std::string namespaceValVal = namespaceValStrVal;

		const std::string nameStrVal =
			thisXml->findRequiredAttribute("name");
		const std::string nameVal = nameStrVal;

		const std::string versionStrVal =
			thisXml->findRequiredAttribute("version");
		const std::string versionVal = versionStrVal;

		const SmartPtrCXmlElement instanceOperationCollectionXml =
			thisXml->findRequiredChild("instanceOperationCollection");

		SmartPtrCInstanceOperationCollectionDoc instanceOperationCollectionVal;
		if (! instanceOperationCollectionXml.IsNull()) {
			instanceOperationCollectionVal = InstanceOperationCollectionXml::parse(instanceOperationCollectionXml);
		}

		actionClassInstanceDoc.CreateInstance();
		actionClassInstanceDoc->initialize(
			namespaceValVal,
			nameVal,
			versionVal,
			instanceOperationCollectionVal);
	}
	CAF_CM_EXIT;

	return actionClassInstanceDoc;
}

