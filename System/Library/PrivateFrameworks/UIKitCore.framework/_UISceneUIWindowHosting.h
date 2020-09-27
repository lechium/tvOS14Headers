/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScreen, UITraitCollection, UIStatusBarManager;


@protocol _UISceneUIWindowHosting <NSObject>
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@property (nonatomic,readonly) UIStatusBarManager * _statusBarManager; 
@required
+(BOOL)_hostsWindows;
-(long long)_interfaceOrientation;
-(UIScreen *)_screen;
-(UITraitCollection *)_traitCollection;
-(id<UICoordinateSpace>)_coordinateSpace;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
-(void)_screenDidChangeFromScreen:(id)arg1 toScreen:(id)arg2;
-(void)_attachWindow:(id)arg1;
-(void)_detachWindow:(id)arg1;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1;
-(void)_windowUpdatedVisibility:(id)arg1;
-(void)_windowUpdatedProperties:(id)arg1;
-(UIStatusBarManager *)_statusBarManager;

@end
