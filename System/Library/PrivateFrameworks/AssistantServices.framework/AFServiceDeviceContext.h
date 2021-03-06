/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray;

@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding> {

	long long _proximity;
	NSUUID* _identifier;
	NSString* _mediaSystemIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _roomName;
	NSArray* _contextSnapshots;
	NSString* _productType;

}

@property (assign,nonatomic) long long proximity;                                  //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,copy,readonly) NSString * productType;                        //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaSystemIdentifier;              //@synthesize mediaSystemIdentifier=_mediaSystemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRouteIdentifier;               //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * roomName;                           //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contextSnapshots;                    //@synthesize contextSnapshots=_contextSnapshots - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)productType;
-(long long)proximity;
-(NSString *)mediaSystemIdentifier;
-(NSString *)roomName;
-(void)setProximity:(long long)arg1 ;
-(NSString *)mediaRouteIdentifier;
-(id)initWithIdentifier:(id)arg1 mediaSystemIdentifier:(id)arg2 mediaRouteIdentifier:(id)arg3 productType:(id)arg4 roomName:(id)arg5 contextSnapshots:(id)arg6 ;
-(NSArray *)contextSnapshots;
@end

