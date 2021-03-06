/*
* ==============================================================================
*  Name        : SIPExLogContainer.h
*  Part of     : SIPEx
*  Interface   : 
*  Description : 
*  Version     : 
*
*  Copyright (c) 2004-2006 Nokia Corporation.
*  This material, including documentation and any related 
*  computer programs, is protected by copyright controlled by 
*  Nokia Corporation.
* ==============================================================================
*/

#ifndef __SIPEXLOGCONTAINER_H__
#define __SIPEXLOGCONTAINER_H__

// INCLUDES
#include <coecntrl.h>
#include <aknutils.h>
 
// FORWARD DECLARATIONS
//class CSIPExEngine;
class CEikGlobalTextEditor;
class CAknsBasicBackgroundControlContext;

// CLASS DECLARATION

/**
*  CSIPExLogContainer  container control class.
*  
*/
class CSIPExLogContainer : public CCoeControl, MCoeControlObserver
    {
    public: // Constructors and destructor
        
        /**
        * C++ default constructor
        * @param aEngine The reference to the application engine.
        */
        CSIPExLogContainer( /*CSIPExEngine& aEngine*/ );
        
        /**
        * EPOC default constructor.
        * @param aRect Frame rectangle for container.
        */
        void ConstructL(const TRect& aRect);

        /**
        * Destructor.
        */
        ~CSIPExLogContainer();

    private: // Functions from base classes

       /**
        * From CoeControl,SizeChanged.
        */
        void SizeChanged();

       /**
        * From CoeControl,CountComponentControls.
        */
        TInt CountComponentControls() const;

       /**
        * From CCoeControl,ComponentControl.
        */
        CCoeControl* ComponentControl( TInt aIndex ) const;

       /**
        * From CCoeControl,Draw.
        */
        void Draw( const TRect& aRect ) const;

       /**
        * From CCoeControl, HandleControlEventL.
        */
        // event handling section
        // e.g Listbox events
        void HandleControlEventL( CCoeControl* aControl,TCoeEvent aEventType );
        
        /**
        * From CCoeControl, OfferKeyEvent.
        */
        TKeyResponse OfferKeyEventL( const TKeyEvent& aKeyEvent, TEventCode aType );
        
        /**
        * From CCoeControl, HandleResourceChange.
        */
        void HandleResourceChange( TInt aType );

        /**
        * From CCoeControl, MopSupplyObject.
        */
        TTypeUid::Ptr MopSupplyObject( TTypeUid aId );
        
    public:
    
        /**
        * Show current info text in editor
        */
        void ShowInfoL();
        
        /**
        * Gets appropriate layout for editor
        */
        AknLayoutUtils::SAknLayoutTextMultiline GetEditorLayout( const TRect& aRect ) const;
        
        TInt FontHeightInPixels() const;
        
        TInt FontTotalHeightInPixels() const;
        
        TInt NumOfFittingEditorLines( const TRect& aRect ) const;
        
        
    private: //data
    
        // Info text area. Area where all info texts can be drawn.
        CEikGlobalTextEditor* iEditor;
        
        CAknsBasicBackgroundControlContext* iBgContext;
        
        //CSIPExEngine& iEngine;
        
    };

#endif // __SIPEXLOGCONTAINER_H__

// End of File
