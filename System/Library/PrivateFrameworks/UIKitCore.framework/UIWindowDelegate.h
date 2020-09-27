/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIWindowDelegate <NSObject>
@optional
-(id)rotatingSnapshotViewForWindow:(id)arg1;
-(id)rotatingContentViewForWindow:(id)arg1;
-(id)rotatingHeaderViewForWindow:(id)arg1;
-(id)rotatingFooterViewForWindow:(id)arg1;
-(void)getRotationContentSettings:(SCD_Struct_UI49*)arg1 forWindow:(id)arg2;
-(void)window:(id)arg1 willAnimateFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
-(void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;

@end
