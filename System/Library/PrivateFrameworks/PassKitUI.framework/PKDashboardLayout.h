/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKDashboardLayout <NSObject>
@property (assign,nonatomic) BOOL fade; 
@optional
-(void)revealContentAnimated:(BOOL)arg1;
-(void)hideContent;
-(BOOL)fade;
-(void)setFade:(BOOL)arg1;

@required
-(UIEdgeInsets*)insetsForSection:(long long)arg1;

@end
