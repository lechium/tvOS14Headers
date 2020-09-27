/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSNumber, NSDictionary;

@interface IDSSessionStartedMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned _clientType;
	NSString* _guid;
	NSNumber* _protocolVersionNumber;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSNumber * protocolVersionNumber;              //@synthesize protocolVersionNumber=_protocolVersionNumber - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) unsigned clientType;                           //@synthesize clientType=_clientType - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)serviceName;
-(NSString *)guid;
-(unsigned)clientType;
-(NSNumber *)protocolVersionNumber;
-(id)initWithGuid:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(unsigned)arg4 ;
@end
