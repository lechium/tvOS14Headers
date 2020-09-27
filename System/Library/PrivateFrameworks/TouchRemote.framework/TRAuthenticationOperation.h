/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TROperation.h>

@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation {

	BOOL _shouldIgnoreAuthFailures;
	BOOL _shouldForceInteractiveAuth;
	NSSet* _targetedServices;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) NSSet * targetedServices;                                 //@synthesize targetedServices=_targetedServices - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreAuthFailures;                            //@synthesize shouldIgnoreAuthFailures=_shouldIgnoreAuthFailures - In the implementation block
@property (assign,nonatomic) BOOL shouldForceInteractiveAuth;                          //@synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(void)execute;
-(UIViewController *)presentingViewController;
-(void)setShouldForceInteractiveAuth:(BOOL)arg1 ;
-(BOOL)shouldForceInteractiveAuth;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setShouldIgnoreAuthFailures:(BOOL)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(NSSet *)targetedServices;
-(BOOL)shouldIgnoreAuthFailures;
@end
