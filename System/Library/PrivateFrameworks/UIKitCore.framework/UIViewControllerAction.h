/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIViewController;

@interface UIViewControllerAction : NSObject {

	NSString* _name;
	int _transition;
	/*^block*/id _completion;
	double _curlUpRevealedHeight;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL animated; 
@property (assign,nonatomic) int transition;                                                             //@synthesize transition=_transition - In the implementation block
@property (nonatomic,copy) id completion;                                                                //@synthesize completion=_completion - In the implementation block
@property (assign,setter=_setCurlUpRevealedHeight:,nonatomic) double _curlUpRevealedHeight;              //@synthesize curlUpRevealedHeight=_curlUpRevealedHeight - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(int)transition;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)animated;
-(void)setTransition:(int)arg1 ;
-(id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3 ;
-(double)_curlUpRevealedHeight;
-(void)_setCurlUpRevealedHeight:(double)arg1 ;
@end
