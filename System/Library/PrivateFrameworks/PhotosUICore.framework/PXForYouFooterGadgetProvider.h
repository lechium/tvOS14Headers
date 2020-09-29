/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXGadgetProvider.h>

@interface PXForYouFooterGadgetProvider : PXGadgetProvider {

	BOOL _attemptedToGenerateGadgets;
	long long _footerState;

}

@property (assign,nonatomic) long long footerState;                        //@synthesize footerState=_footerState - In the implementation block
@property (assign,nonatomic) BOOL attemptedToGenerateGadgets;              //@synthesize attemptedToGenerateGadgets=_attemptedToGenerateGadgets - In the implementation block
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)generateGadgets;
-(void)setFooterState:(long long)arg1 ;
-(id)_peaceMemoryFetchOptions;
-(BOOL)_didProcessContentOvernight;
-(void)_handleFaceProgressCompletionWithCountDictionary:(id)arg1 ;
-(void)_handleSceneProgressCompletionWithCount:(unsigned long long)arg1 ;
-(void)_generateFooterGadget;
-(long long)footerState;
-(BOOL)attemptedToGenerateGadgets;
-(void)setAttemptedToGenerateGadgets:(BOOL)arg1 ;
@end

