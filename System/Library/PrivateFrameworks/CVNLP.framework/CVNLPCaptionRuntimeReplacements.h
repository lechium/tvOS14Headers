/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CVNLPCaptionRuntimeReplacements : NSObject {

	NSString* _replacementKey;
	NSString* _replacementValue;
	double _replacementProb;
	NSNumber* _genderOption;

}

@property (nonatomic,readonly) NSString * replacementKey;                //@synthesize replacementKey=_replacementKey - In the implementation block
@property (nonatomic,readonly) NSString * replacementValue;              //@synthesize replacementValue=_replacementValue - In the implementation block
@property (nonatomic,readonly) double replacementProb;                   //@synthesize replacementProb=_replacementProb - In the implementation block
@property (nonatomic,readonly) NSNumber * genderOption;                  //@synthesize genderOption=_genderOption - In the implementation block
-(NSNumber *)genderOption;
-(id)initWithKey:(id)arg1 value:(id)arg2 prob:(double)arg3 genderOption:(id)arg4 ;
-(NSString *)replacementKey;
-(NSString *)replacementValue;
-(double)replacementProb;
@end

