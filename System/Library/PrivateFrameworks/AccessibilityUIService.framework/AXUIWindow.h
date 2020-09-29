/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:32 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <AccessibilityUIService/AccessibilityUIService-Structs.h>
#import <UIKitCore/UIWindow.h>
#import <libobjc.A.dylib/AXUIWindowProtocol.h>

@interface AXUIWindow : UIWindow <AXUIWindowProtocol> {

	BOOL _isHandlingFullScreenPresentation;
	BOOL _shouldRespondToDarkModeChanges;

}

@property (assign,nonatomic) BOOL shouldRespondToDarkModeChanges;                //@synthesize shouldRespondToDarkModeChanges=_shouldRespondToDarkModeChanges - In the implementation block
@property (assign,nonatomic) BOOL isHandlingFullScreenPresentation;              //@synthesize isHandlingFullScreenPresentation=_isHandlingFullScreenPresentation - In the implementation block
+(BOOL)_isSecure;
-(id)description;
-(id)accessibilityLabel;
-(BOOL)_accessibilityIsIsolatedWindow;
-(id)_accessibilityElementCommunityIdentifier;
-(BOOL)shouldRespondToDarkModeChanges;
-(void)setShouldRespondToDarkModeChanges:(BOOL)arg1 ;
-(BOOL)isHandlingFullScreenPresentation;
-(void)setIsHandlingFullScreenPresentation:(BOOL)arg1 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)_layerForCoordinateSpaceConversion;
-(long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)arg1 ;
-(UIEdgeInsets)_normalizedSafeAreaInsets;
@end

