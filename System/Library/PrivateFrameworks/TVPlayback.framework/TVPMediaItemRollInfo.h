/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface TVPMediaItemRollInfo : NSObject {

	BOOL _skippable;
	unsigned long long _type;
	double _start;
	double _duration;
	NSNumber* _adamID;

}

@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double start;                                 //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSNumber * adamID;                              //@synthesize adamID=_adamID - In the implementation block
@property (assign,getter=isSkippable,nonatomic) BOOL skippable;              //@synthesize skippable=_skippable - In the implementation block
-(id)description;
-(unsigned long long)type;
-(double)start;
-(double)duration;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(id)_typeDescription;
-(BOOL)isSkippable;
-(id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 ;
-(void)setSkippable:(BOOL)arg1 ;
@end
