/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
@class NSString, NSArray;

@interface TTSBoostRuleMatch : NSObject {

	NSString* _rule;
	long long _boostRuleIndex;
	NSArray* _groupings;
	NSRange _range;

}

@property (nonatomic,retain) NSString * rule;                       //@synthesize rule=_rule - In the implementation block
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long boostRuleIndex;              //@synthesize boostRuleIndex=_boostRuleIndex - In the implementation block
@property (nonatomic,retain) NSArray * groupings;                   //@synthesize groupings=_groupings - In the implementation block
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)rule;
-(void)setRule:(NSString *)arg1 ;
-(void)setGroupings:(NSArray *)arg1 ;
-(NSArray *)groupings;
-(long long)boostRuleIndex;
-(void)setBoostRuleIndex:(long long)arg1 ;
@end
