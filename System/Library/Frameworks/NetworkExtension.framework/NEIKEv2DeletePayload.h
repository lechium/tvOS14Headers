/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2DeletePayload : NEIKEv2Payload {

	unsigned long long _protocol;
	NSArray* _spis;

}

@property (assign) unsigned long long protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (retain) NSArray * spis;                           //@synthesize spis=_spis - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)protocol;
-(void)setProtocol:(unsigned long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)spis;
-(void)setSpis:(NSArray *)arg1 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end
