//========= Director's Cut - https://github.com/KiwifruitDev/DirectorsCut =========//
//
// Purpose: Editor window controls for Director's Cut.
//
// $NoKeywords: $
//=================================================================================//

#ifndef DXEDITORANIMATIONSETEDITOR_H
#define DXEDITORANIMATIONSETEDITOR_H

#ifdef _WIN32
#pragma once
#endif

#include "../directorscut.h"
#include <vgui_controls/Frame.h>
#include <vgui_controls/PropertyPage.h>
#include <vgui_controls/ToolWindow.h>
#include <vgui_controls/TreeView.h>
#include <vgui_controls/ListPanel.h>
#include "dmxloader/dmxattribute.h"
#include "dmxloader/dmxloader.h"
#include "dmxloader/dmxelement.h"

using namespace vgui;

class DXEditorAnimationSetEditor : public EditablePanel
{
	DECLARE_CLASS_SIMPLE( DXEditorAnimationSetEditor, EditablePanel );

public:
	DXEditorAnimationSetEditor( Panel *pParent );
    virtual void ApplySchemeSettings( IScheme *scheme );
    virtual void OnThink();

protected:
    void PopulateTreeFromDocument();
    //CDmxElement* m_pSelectedShot;
    
    char m_selectedElement[ 256 ];
    TreeView* m_pTree = NULL;
};

#endif // DXEDITORANIMATIONSETEDITOR_H