/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface HMDCoreDuetLogEventData : NSObject {

	NSDictionary* _metadata;
	NSString* _value;

}

@property (copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (copy,readonly) NSString * value;                     //@synthesize value=_value - In the implementation block
-(NSString *)value;
-(NSDictionary *)metadata;
-(id)initWithMetadata:(id)arg1 value:(id)arg2 ;
@end
