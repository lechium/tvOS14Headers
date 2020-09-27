/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EMTToken : NSObject <NSCopying> {

	BOOL _precededBySpace;
	BOOL _followedBySpace;
	float _confidence;
	NSString* _text;

}

@property (nonatomic,readonly) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) float confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL precededBySpace;              //@synthesize precededBySpace=_precededBySpace - In the implementation block
@property (nonatomic,readonly) BOOL followedBySpace;              //@synthesize followedBySpace=_followedBySpace - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)confidence;
-(NSString *)text;
-(BOOL)precededBySpace;
-(BOOL)followedBySpace;
-(id)initWithText:(id)arg1 confidence:(float)arg2 precededBySpace:(BOOL)arg3 followedBySpace:(BOOL)arg4 ;
@end
