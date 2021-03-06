/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriTVUI/SiriTVUI-Structs.h>
@interface SiriTVUITemplateItem : NSObject {

	BOOL _shouldBeOffScreenInPartial;
	BOOL _hasPriorityLayout;
	unsigned long long _presentationOptions;
	unsigned long long _communicationOptions;
	UIEdgeInsets _padding;
	UIEdgeInsets _fullScreenPaddingDelta;

}

@property (assign,nonatomic) unsigned long long presentationOptions;               //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (assign,nonatomic) unsigned long long communicationOptions;              //@synthesize communicationOptions=_communicationOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldBeOffScreenInPartial;                      //@synthesize shouldBeOffScreenInPartial=_shouldBeOffScreenInPartial - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                 //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets fullScreenPaddingDelta;                  //@synthesize fullScreenPaddingDelta=_fullScreenPaddingDelta - In the implementation block
@property (assign,nonatomic) BOOL hasPriorityLayout;                               //@synthesize hasPriorityLayout=_hasPriorityLayout - In the implementation block
-(id)init;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(unsigned long long)communicationOptions;
-(void)setCommunicationOptions:(unsigned long long)arg1 ;
-(UIEdgeInsets)fullScreenPaddingDelta;
-(void)setFullScreenPaddingDelta:(UIEdgeInsets)arg1 ;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(unsigned long long)presentationOptions;
-(void)setPresentationOptions:(unsigned long long)arg1 ;
-(BOOL)shouldBeOffScreenInPartial;
-(void)setShouldBeOffScreenInPartial:(BOOL)arg1 ;
@end

