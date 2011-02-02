///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __EditorGenerated__
#define __EditorGenerated__

#include <wx/intl.h>

namespace Helium{ namespace Editor{ class Button; } }
namespace Helium{ namespace Editor{ class Frame; } }
namespace Helium{ namespace Editor{ class MenuButton; } }
namespace Helium{ namespace Editor{ class PanelButton; } }

#include "Editor/Frame.h"
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/panel.h>
#include <wx/scrolwin.h>
#include <wx/notebook.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/button.h>
#include <wx/statline.h>
#include <wx/dataview.h>
#include <wx/radiobut.h>
#include "Editor/Controls/Tree/TreeWndCtrl.h"
#include <wx/srchctrl.h>

///////////////////////////////////////////////////////////////////////////

namespace Helium
{
	namespace Editor
	{
		///////////////////////////////////////////////////////////////////////////////
		/// Class MainFrameGenerated
		///////////////////////////////////////////////////////////////////////////////
		class MainFrameGenerated : public Helium::Editor::Frame
		{
			private:
			
			protected:
				enum
				{
					ID_NewScene = 1000,
					ID_NewEntity,
					ID_NewProject,
					ID_Open,
					ID_Close,
					ID_SaveAll,
					ID_Import,
					ID_ImportFromClipboard,
					ID_Export,
					ID_ExportToClipboard,
					ID_Exit,
					ID_SelectAll,
					ID_InvertSelection,
					ID_Parent,
					ID_Unparent,
					ID_Group,
					ID_Ungroup,
					ID_Center,
					ID_Duplicate,
					ID_SmartDuplicate,
					ID_CopyTransform,
					ID_PasteTransform,
					ID_SnapToCamera,
					ID_SnapCameraTo,
					ID_WalkUp,
					ID_WalkDown,
					ID_WalkForward,
					ID_WalkBackward,
					ID_Settings,
					ID_About,
				};
				
				wxMenuBar* m_MainMenuBar;
				wxMenu* m_MenuFile;
				wxMenu* m_MenuFileNew;
				wxMenu* m_MenuFileOpenRecent;
				wxMenu* m_MenuEdit;
				wxMenu* m_MenuPanels;
				wxMenu* m_MenuSettings;
				wxMenu* m_MenuHelp;
				wxStatusBar* m_MainStatusBar;
				
				// Virtual event handlers, overide them in your derived class
				virtual void OnNewScene( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnNewEntity( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnNewProject( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnOpen( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSaveAll( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnImport( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnExport( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnExit( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnUndo( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnRedo( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnCut( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnCopy( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnPaste( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnDelete( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSelectAll( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnInvertSelection( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnParent( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnUnparent( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnGroup( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnUngroup( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnCenter( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnDuplicate( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSmartDuplicate( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnCopyTransform( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnPasteTransform( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSnapToCamera( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSnapCameraTo( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnPickWalk( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSettings( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
				
			
			public:
				
				MainFrameGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1280,1024 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
				~MainFrameGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class DetailsPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class DetailsPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				wxScrolledWindow* m_ScrollWindow;
				wxStaticText* m_LabelName;
				wxTextCtrl* m_Name;
				wxStaticText* m_LabelFileType;
				wxTextCtrl* m_FileType;
				wxStaticText* m_LabelFileID;
				wxTextCtrl* m_FileID;
				wxStaticText* m_LabelFolder;
				wxTextCtrl* m_Folder;
				wxPanel* m_RevisionPanel;
				wxStaticText* m_LabelPerforce;
				wxStaticText* m_LabelRevisionStatus;
				wxPanel* m_StatusPanel;
				wxStaticBitmap* m_RevisionStatusIcon;
				wxStaticText* m_RevisionStatus;
				wxPanel* m_LastCheckInPanel;
				wxStaticText* m_LabelLastCheckIn;
				wxTextCtrl* m_LastCheckIn;
				wxPanel* m_FirstCheckInPanel;
				wxStaticText* m_LabelFirstCheckIn;
				wxTextCtrl* m_FirstCheckIn;
			
			public:
				
				DetailsPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,421 ), long style = wxTAB_TRAVERSAL );
				~DetailsPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class DirectoryPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class DirectoryPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				wxNotebook* m_DirectoryNotebook;
				wxPanel* m_HierarchyPanel;
				wxPanel* m_EntitiesPanel;
				wxPanel* m_TypesPanel;
			
			public:
				
				DirectoryPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
				~DirectoryPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class HelpPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class HelpPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				wxRichTextCtrl* m_HelpRichText;
			
			public:
				
				HelpPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,200 ), long style = wxTAB_TRAVERSAL );
				~HelpPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class LayersPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class LayersPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				wxPanel* m_LayerManagementPanel;
				wxStaticLine* m_staticline4;
				wxStaticLine* m_staticline5;
			
			public:
				Helium::Editor::Button* m_CreateNewLayerFromSelectionButton;
				Helium::Editor::Button* m_CreateNewLayerButton;
				Helium::Editor::Button* m_DeleteSelectedLayersButton;
				Helium::Editor::Button* m_AddSelectionToLayerButton;
				Helium::Editor::Button* m_RemoveSelectionFromLayerButton;
				Helium::Editor::Button* m_SelectLayerMembersButton;
				Helium::Editor::Button* m_SelectLayersButton;
				
				LayersPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
				~LayersPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class ProjectPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class ProjectPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				wxPanel* m_ProjectManagementPanel;
				wxStaticText* m_ProjectNameStaticText;
				wxDataViewCtrl* m_DataViewCtrl;
				wxScrolledWindow* m_OpenProjectPanel;
				wxPanel* m_RecentProjectsPanel;
				wxStaticBitmap* m_RecentProjectsBitmap;
				wxStaticText* m_RecentProjectsStaticText;
				wxStaticLine* m_staticline16;
				wxBoxSizer* m_RecentProjectsSizer;
				wxStaticLine* m_staticline13;
				
				// Virtual event handlers, overide them in your derived class
				virtual void OnOpenProjectButtonClick( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnNewProjectButtonClick( wxCommandEvent& event ) { event.Skip(); }
				
			
			public:
				Helium::Editor::MenuButton* m_OptionsButton;
				wxPanel* m_OpenOrCreateProjectPanel;
				Helium::Editor::Button* m_OpenProjectButton;
				Helium::Editor::Button* m_CreateNewProjectButton;
				
				ProjectPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,344 ), long style = wxTAB_TRAVERSAL );
				~ProjectPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class PropertiesPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class PropertiesPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				wxPanel* m_ControlsPanel;
				wxRadioButton* m_IntersectionButton;
				wxRadioButton* m_UnionButton;
				Helium::TreeWndCtrl* m_TreeWndCtrl;
				
				// Virtual event handlers, overide them in your derived class
				virtual void OnIntersection( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnUnion( wxCommandEvent& event ) { event.Skip(); }
				
			
			public:
				
				PropertiesPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
				~PropertiesPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class ToolbarPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class ToolbarPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				wxPanel* m_MainPanel;
				wxStaticText* m_SelectText;
				wxStaticBitmap* m_SelectBitmap;
				wxStaticText* m_TranslateText;
				wxStaticBitmap* m_TranslateBitmap;
				wxStaticText* m_RotateText;
				wxStaticBitmap* m_RotateBitmap;
				wxStaticText* m_ScaleText;
				wxStaticBitmap* m_ScaleBitmap;
				wxStaticText* m_DuplicateToolText;
				wxStaticBitmap* m_DuplicateToolBitmap;
				wxStaticText* m_LocatorToolText;
				wxStaticBitmap* m_LocatorToolBitmap;
				wxStaticText* m_VolumeToolText;
				wxStaticBitmap* m_VolumeToolBitmap;
				wxStaticText* m_EntityToolText;
				wxStaticBitmap* m_EntityToolBitmap;
				wxStaticText* m_CurveToolText;
				wxStaticBitmap* m_CurveToolBitmap;
				wxStaticText* m_CurveEditToolText;
				wxStaticBitmap* m_CurveEditToolBitmap;
				wxStaticText* m_PlayText;
				wxStaticBitmap* m_PlayBitmap;
				wxStaticText* m_PauseText;
				wxStaticBitmap* m_PauseBitmap;
				wxStaticText* m_StopText;
				wxStaticBitmap* m_StopBitmap;
				
				
				wxPanel* m_ToolsPropertiesPanel;
				
				// Virtual event handlers, overide them in your derived class
				virtual void OnSearchGoButtonClick( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSearchTextEnter( wxCommandEvent& event ) { event.Skip(); }
				
			
			public:
				Helium::Editor::PanelButton* m_SelectPanelButton;
				Helium::Editor::PanelButton* m_TranslatePanelButton;
				Helium::Editor::PanelButton* m_RotatePanelButton;
				Helium::Editor::PanelButton* m_ScalePanelButton;
				Helium::Editor::PanelButton* m_DuplicateToolPanelButton;
				Helium::Editor::PanelButton* m_LocatorToolPanelButton;
				Helium::Editor::PanelButton* m_VolumeToolPanelButton;
				Helium::Editor::PanelButton* m_EntityToolPanelButton;
				Helium::Editor::PanelButton* m_CurveToolPanelButton;
				Helium::Editor::PanelButton* m_CurveEditToolPanelButton;
				Helium::Editor::PanelButton* m_PlayPanelButton;
				Helium::Editor::PanelButton* m_PausePanelButton;
				Helium::Editor::PanelButton* m_StopPanelButton;
				wxSearchCtrl* m_VaultSearchBox;
				
				ToolbarPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 986,88 ), long style = wxTAB_TRAVERSAL );
				~ToolbarPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class TypesPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class TypesPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
			
			public:
				
				TypesPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
				~TypesPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class VaultPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class VaultPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				wxPanel* m_NavigationPanel;
				wxSearchCtrl* m_SearchCtrl;
				wxPanel* m_ResultsPanel;
				
				// Virtual event handlers, overide them in your derived class
				virtual void OnSearchCancelButtonClick( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSearchGoButtonClick( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnSearchTextEnter( wxCommandEvent& event ) { event.Skip(); }
				
			
			public:
				Helium::Editor::MenuButton* m_OptionsButton;
				
				VaultPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 773,453 ), long style = wxTAB_TRAVERSAL );
				~VaultPanelGenerated();
			
		};
		
		///////////////////////////////////////////////////////////////////////////////
		/// Class ViewPanelGenerated
		///////////////////////////////////////////////////////////////////////////////
		class ViewPanelGenerated : public wxPanel 
		{
			private:
			
			protected:
				enum
				{
					ID_OrbitCamera = 1000,
					ID_FrontCamera,
					ID_SideCamera,
					ID_TopCamera,
				};
				
				wxPanel* m_ToolPanel;
				wxPanel* m_ViewContainerPanel;
				
				// Virtual event handlers, overide them in your derived class
				virtual void OnFrameOrigin( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnFrameSelected( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnToggleHighlightMode( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnPreviousView( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnNextView( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnViewChange( wxCommandEvent& event ) { event.Skip(); }
				virtual void OnColorMode( wxCommandEvent& event ) { event.Skip(); }
				
			
			public:
				Helium::Editor::Button* m_FrameOriginButton;
				Helium::Editor::Button* m_FrameSelectedButton;
				Helium::Editor::Button* m_HighlightModeToggleButton;
				Helium::Editor::Button* m_PreviousViewButton;
				Helium::Editor::Button* m_NextViewButton;
				Helium::Editor::Button* m_OrbitCameraToggleButton;
				Helium::Editor::Button* m_FrontCameraToggleButton;
				Helium::Editor::Button* m_SideCameraToggleButton;
				Helium::Editor::Button* m_TopCameraToggleButton;
				Helium::Editor::Button* m_ShowAxesToggleButton;
				Helium::Editor::Button* m_ShowGridToggleButton;
				Helium::Editor::Button* m_ShowBoundsToggleButton;
				Helium::Editor::Button* m_ShowStatisticsToggleButton;
				Helium::Editor::Button* m_FrustumCullingToggleButton;
				Helium::Editor::Button* m_BackfaceCullingToggleButton;
				Helium::Editor::Button* m_WireframeShadingToggleButton;
				Helium::Editor::Button* m_MaterialShadingToggleButton;
				Helium::Editor::Button* m_ColorModeSceneToggleButton;
				Helium::Editor::Button* m_ColorModeLayerToggleButton;
				Helium::Editor::Button* m_ColorModeNodeTypeToggleButton;
				Helium::Editor::Button* m_ColorModeScaleToggleButton;
				Helium::Editor::Button* m_ColorModeScaleGradientToggleButton;
				
				ViewPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 826,617 ), long style = wxTAB_TRAVERSAL );
				~ViewPanelGenerated();
			
		};
		
	} // namespace Editor
} // namespace Helium

#endif //__EditorGenerated__
