//----------------------------------------------------------------------------------------------------------------------
// WorldManager.h
//
// Copyright (C) 2010 WhiteMoon Dreams, Inc.
// All Rights Reserved
//----------------------------------------------------------------------------------------------------------------------

#pragma once
#ifndef HELIUM_FRAMEWORK_WORLD_MANAGER_H
#define HELIUM_FRAMEWORK_WORLD_MANAGER_H

#include "Framework/World.h"

#include "Engine/Package.h"

#include "Platform/Thread.h"

/// Non-zero to enable debug verification of methods called on EntityDefinition-based instances during world updates.
#define HELIUM_ENABLE_WORLD_UPDATE_SAFETY_CHECKING ( !HELIUM_RELEASE )

namespace Helium
{
    /// Manager for individual World instances.
    class HELIUM_FRAMEWORK_API WorldManager : NonCopyable
    {
    public:
        /// @name Initialization
        //@{
        bool Initialize();
        void Shutdown();
        //@}

        /// @name World Creation
        //@{
        Helium::World *CreateWorld( WorldDefinitionPtr _world_definition );
        //@}

        /// @name Updating
        //@{
        void Update();
        //@}

        /// @name Timing
        //@{
        inline uint64_t GetFrameTickCount() const;
        inline uint64_t GetFrameDeltaTickCount() const;
        inline float32_t GetFrameDeltaSeconds() const;
        //@}
        
        /// @name Static Access
        //@{
        static WorldManager& GetStaticInstance();
        static void DestroyStaticInstance();
        //@}

    private:
        /// World instances.
        DynamicArray< WorldPtr > m_worlds;

        /// Actual application tick count at the start of the current frame.
        uint64_t m_actualFrameTickCount;
        /// Elapsed tick count for the current frame (adjusted for frame rate limits).
        uint64_t m_frameTickCount;
        /// Ticks since the previous frame (adjusted for frame rate limits).
        uint64_t m_frameDeltaTickCount;
        /// Seconds elapsed since the previous frame (adjusted for frame rate limits).
        float32_t m_frameDeltaSeconds;
        
        /// True if the first frame has been processed.
        bool m_bProcessedFirstFrame;

        /// Singleton instance.
        static WorldManager* sm_pInstance;

        /// @name Construction/Destruction
        //@{
        WorldManager();
        ~WorldManager();
        //@}

        /// @name Time Updating
        //@{
        void UpdateTime();
        //@}
    };
}

#include "Framework/WorldManager.inl"

#endif  // HELIUM_FRAMEWORK_WORLD_MANAGER_H
