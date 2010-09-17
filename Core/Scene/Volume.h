#pragma once

#include "Instance.h"

#include "Core/Content/Nodes/ContentVolume.h"

namespace Helium
{
    namespace Core
    {
        class VolumeType;

        /////////////////////////////////////////////////////////////////////////////
        // Editor's wrapper for an volume instance.
        // 
        class Volume : public Core::Instance
        {
        public:
            REFLECT_DECLARE_ABSTRACT( Core::Volume, Core::Instance );
            static void InitializeType();
            static void CleanupType();

            Volume(Core::Scene* s);
            Volume(Core::Scene* s, Content::Volume* volume);
            virtual ~Volume();

            virtual i32 GetImageIndex() const HELIUM_OVERRIDE;
            virtual tstring GetApplicationTypeName() const HELIUM_OVERRIDE;
            virtual SceneNodeTypePtr CreateNodeType( Core::Scene* scene ) const HELIUM_OVERRIDE;

            int GetShape() const;
            void SetShape( int shape );

            virtual void Evaluate(GraphDirection direction) HELIUM_OVERRIDE;

            virtual void Render( RenderVisitor* render ) HELIUM_OVERRIDE;
            static void DrawPointer( IDirect3DDevice9* device, DrawArgs* args, const SceneNode* object );
            static void DrawShape( IDirect3DDevice9* device, DrawArgs* args, const SceneNode* object );

            virtual bool Pick( PickVisitor* pick ) HELIUM_OVERRIDE;

            virtual bool ValidatePanel(const tstring& name) HELIUM_OVERRIDE;

            static void CreatePanel( CreatePanelArgs& args );

            bool IsPointerVisible() const;
            void SetPointerVisible(bool visible);
        };

        typedef Helium::SmartPtr<Core::Volume> VolumePtr;
        typedef std::vector< Core::Volume* > V_VolumeDumbPtr;
    }
}