/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriContext.h>

@class NSDictionary;

@interface SiriTestingContext : SiriContext {

	NSDictionary* _testingContext;

}

@property (nonatomic,readonly) NSDictionary * testingContext;              //@synthesize testingContext=_testingContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)testingContext;
-(BOOL)containsRecognitionStrings;
-(BOOL)containsAudioInput;
-(id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithPPTContext:(id)arg1 ;
-(id)initWithRecognitionStrings:(id)arg1 ;
-(id)initWithAudioInput:(id)arg1 ;
@end

