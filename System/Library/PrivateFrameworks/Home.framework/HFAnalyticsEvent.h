/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSDictionary;

@interface HFAnalyticsEvent : NSObject {

	unsigned long long _type;
	NSDate* _timestamp;

}

@property (nonatomic,retain) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * payload; 
-(NSString *)name;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)type;
-(NSDate *)timestamp;
-(NSDictionary *)payload;
-(id)initWithEventType:(unsigned long long)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

